// --------------------------------------- 1st method ----------------------------------------------------------------------------------------------------

/*The problem that we have in class is due to the behaviour of scanf function, the following code is the one that works as intended:*/
#include <stdio.h>
int main()
{
    char c;
    scanf(" %c", &c);
    int aCounter = 0, cCounter = 0;
    while (c != 'q')
    {
        switch (c)
        {
        case 'a':
            aCounter++;
            break;
        case 'A':
            aCounter++;
            break;
        case 'c':
            cCounter++;
            break;
        case 'C':
            cCounter++;
            break;
        default:
            printf("\nOther key\n");
            break;
        }
        printf("A counter: %d\nC counter: %d\n", aCounter, cCounter);
        scanf(" %c", &c);
    }

    return 0;
}

/*the reason being when scanf returns it also have the carriage return in buffer which is a default case for the program and thus default is always
executed. The way to mitigate it is to use a space before the %c in scanf and this does not happen with %d or %f as the buffer this is in the definition
of input formatting of scanf while using %c, in order to avoid the '\n' in the input buffer. fflush stdin also does not work here because the buffer
is locked by scanf. I got this info properly from IBMs documentation of scanf
https://www.ibm.com/docs/en/i/7.1?topic=functions-scanf-read-data
this is the usage of scanf so whatever 'jugaad' we can think of, it is going to behave like this only!*/

// --------------------------------------- 2nd method -----------------------------------------------------------------------------------------------------

// and if you want to use getchar() the way I was saying this will work

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    system("/bin/stty raw");
    c = getchar();
    int aCounter = 0, cCounter = 0;
    while (c != 'q')
    {
        switch (c)
        {
        case 'a':
            aCounter++;
            break;
        case 'A':
            aCounter++;
            break;
        case 'c':
            cCounter++;
            break;
        case 'C':
            cCounter++;
            break;
        default:
            printf("\nOther key\n");
            break;
        }
        printf("A counter: %d\nC counter: %d\n", aCounter, cCounter);
        c = getchar();
    }
    system("/bin/stty cooked");

    return 0;
}

/*this is a linux specific solution for the terminal x. actually terminals default system waits for a newline for getchar() this change happened
from gcc11. in turboC this was not a problem in windows as conio.h saved the day. here you have to explicitly broadcast to the system to use the
stty or input pipe (don't ask just google!) in raw mode rather than cooked or censored mode (censored keyword is cooked by me so please don't
experiment with that!) and then change it back to cooked mode after you are done. this is necessary specially when you are using arrow keys to make
a game.*/

/*Just an update: you don't need the system declaration here infact that is leading to erroneous result with backspace and enter in online gdb
the code is changed a little, just omit those two lines*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // system("/bin/stty raw");
    char sentence[500];
    char c;
    int i = 0;
    while ((c = getchar()) != '\n')
    {
        if ((c == '\b') && (i > 0))
            i--;
        else
            sentence[i] = c;
        i++;
    }
    sentence[i] = '\0';
    // system("/bin/stty cooked");

    printf("\n\nThe entered sentence is: %s", sentence);

    return 0;
}

