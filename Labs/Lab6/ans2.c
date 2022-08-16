/*(2) Print only the output up to one more than the half of the number given as input (in Q.4). Your modified code should give the below output: (Sample output):
CODE:*/

#include <stdio.h>
int main()
{
    int num = 0;
    int line_count = 0;
    printf("Enter any number between 1 and 50:\n");
    scanf("%d", &num);
    if (num > 50)
    {
        num = 50;
    }
    int x = num;
    while (num >= ((x / 2) + 1))
    {
        if (line_count < 10)
        {
            line_count += 1;
        }
        else
        {
            printf("\n");
            line_count = 1;
        }
        printf("%3d", num--);
    }
    return 0;
}
