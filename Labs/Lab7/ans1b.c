/*b) Modify the
above code to generate the pattern shown in second figure.
CODE :*/

#include <stdio.h>
int main()
{
    int n = 0;
    printf("enter a number between 1 and 9:");
    scanf("%d", &n);
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k <= n - i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
