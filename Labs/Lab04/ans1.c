/*Q1. Write a C program to print Pascal’s triangle using for loops by taking the limit from the user.
CODE:*/

#include <stdio.h>
int coefficient (int x, int y) // function to calculate value of xCy i.e. x!/((x-y)!*y!)
{
long int fact_x = 1, fact_a = 1, fact_y = 1;
long int i;
for (i = 1; i <= x; i++)
{
    fact_x = fact_x * i;
}
for (i = 1; i <= y; i++)
{
    fact_y = fact_y * i;
}
for (i = 1; i <= (x - y); i++)
{
    fact_a = fact_a * i;
}
return (fact_x) / ((fact_a) * (fact_y));
}
int main()

{
    int n = 0;
    int i, j;
    int ans = 0;
    printf("Hello user,enter the number of rows in pascal triangle:\n");
    scanf("%d", &n);
    printf("1\n");
    for (i = 1; i <= n - 1; i++)
    {
        printf("1\t");
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", ans);
        }
        printf("\n");
    }
    return 0;
}

