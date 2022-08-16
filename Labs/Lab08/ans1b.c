// b) CODE:

#include <stdio.h>
void dec_to_Hex(int n)
{
    int hex = 0;
    if (!n) // if n==0 then this will get executed
    {
        return;
    }
    else
    {
        hex = n % 16;
        dec_to_Hex(n / 16); // recursion
    }
    if (hex > 9)
    {
        printf("%c", 'A' + (hex - 10));
    }
    else
    {
        printf("%d", hex);
    }
}
int main()
{
    int n = 0;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    printf("The equivalent hexadecimal number for the given decimal number is: ");
    dec_to_Hex(n); // converts decimal number to equivalent hexadecimal number and prints it
    printf("\n");
    return 0;
}
