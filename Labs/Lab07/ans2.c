/*Q .6 Modify the program in Question 2 to print 3 pyramids and the number of rows should be twice the
    input number as shown below.CODE :*/

#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= (2 * n) - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int x = 1; x <= i - 1; x++)
        {
            printf("*");
        }
        for (int y = 1; y <= 2 * n - i + 1; y++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * n) - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int x = 1; x <= i - 1; x++)
        {
            printf("*");
        }
        for (int y = 1; y <= 2 * n - i + 1; y++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * n) - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (int x = 1; x <= i - 1; x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
