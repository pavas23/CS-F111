
/*1. Modify the program in Que. 2 to count the number of special characters additionally along with other output.
CODE :*/

#include <stdio.h>
int main(void)
{
    char str[200];
    int line, word, ch;
    line = word = ch = 0;
    int specialchar = 0;
    printf("enter string terminated with ~\n");
    scanf("%[^~]", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            line++;
            word++;
        }
        else if (str[i] == ' ' || str[i] == '\t')
        {
            word++;
            ch++;
        }
        else if ((str[i] >= 32 && str[i] <= 47) || ((str[i] >= 58) && (str[i] <= 64)) ||
                 (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126)) // ascii values for special characters
        {
            ch++;
            specialchar++;
        }
        else
        {
            ch++;
        }
    }
    printf("\nchar counts = %d\n", ch);
    printf("word counts= %d\n", word);
    printf("line counts= %d\n", line + 1);
    printf("special char count= %d\n", specialchar);
}
