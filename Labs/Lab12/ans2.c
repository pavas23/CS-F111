// 2. Write a C program to read the last line from the file. CODE:

#include <stdio.h>
#include <string.h>
int main(void)
{
    FILE *fptr;
    char c;
    char lastline[100];
    int i = 0;
    fptr = fopen("input3.txt", "r");
    while ((c = getc(fptr)) != EOF)
    {
        if (c == '\n')
        {
            strcpy(lastline, "");
            i = 0;
        }
        else
        {
            lastline[i++] = c;
        }
    }
    printf("%s\n", lastline);
    fclose(fptr);
    return 0;
}

