// 3. Write a C program to calculate x^(y+z) by using a user defined function. CODE:

#include <stdio.h>
int power(int x, int y, int z)
{
    int n = y + z;
    int power = 1;
    for (int i = 1; i <= n; i++)
    {
        power = power * x;
    }
    return power;
}
int main()
{
    int x = 0, y = 0, z = 0;
    printf("Enter the value of x:");
    scanf("%d", &x);
    printf("Enter the value of y:");
    scanf("%d", &y);
    printf("Enter the value of z:");
    scanf("%d", &z);
    int ans = power(x, y, z);
    printf("\nThe value of x^(y+z) is %d\n\n", ans);
    return 0;
}

