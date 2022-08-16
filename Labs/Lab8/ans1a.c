
/*1. Write a program to PRINT the hexadecimal equivalent of an input decimal number. a) Using array b)Using function
a)
CODE :*/

#include <stdio.h>
int main()
{
    int n = 0;
    int rem = 0;
    char hex_dec[100];
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    printf("Enter a decimal number ");
    scanf("%d", &n);
    int x = n;
    if (n == 0)
    {
        printf("Hexadecimal equivalent of the given decimal number is %d\n", 0);
    }
    int i = 0;
    while (n > 0)
    {
        rem = n % 16;
        hex_dec[i] = hex[rem];
        n = n / 16;
        i++;
    }
    printf("\n");
    if (x > 0)
    {
        printf("Hexadecimal equivalent of the given decimal number is: ");
    }
    for (int j = i; j >= 0; j--)
    {
        printf("%c", hex_dec[j]);
    }
    printf("\n\n");
    return 0;
}
