// 2. Write a c program to print the reverse of a sentence using pointers. CODE:

#include <stdio.h>
void rev(char *a, char *b)
{
    while (a < b)
    {
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
        a++;
        b--;
    }
}
int main(void)
{
    char str[500], *x, *y;
    printf("Enter the sentence: \n");
    scanf("%[^\n]s", str);
    x = &str[0];
    y = x;
    while (1)
    {
        x++;
        if (*x == ' ')
        {
            rev(y, x - 1);
            y = x + 1;
        }
        else if (*x == '\0')
        {
            rev(y, x - 1);
            break;
        }
    }
    rev(str, x - 1);
    printf("sentence after reversal is:\n");
    printf("%s\n", str);
    return 0;
}


