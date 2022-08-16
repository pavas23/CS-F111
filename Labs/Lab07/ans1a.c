
/*Q.5 a) Modify the above Q.1 program to generate the pattern shown in first figure below.
CODE :*/

#include <stdio.h>
int main()
{
    int n = 0;
    printf("enter a number between 1 and 9: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("#");
        }
        for (int k = i; k <= n - 1 + 1; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
