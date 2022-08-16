/*2. Write a program to do binary addition. Take two binary numbers as input and add them to get their binary sum. Take your input in long long int format. Do not use Arrays or any other data structures.
CODE:*/

#include <stdio.h>
#include <math.h>
int bin_dec(long long int n)
{
    long long int dec = 0;
    int i = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}
int dec_bin(int n)
{
    long long int bin = 0;
    int i = 0;
    while (n > 0)
    {
        int rem = n % 2;
        bin += rem * pow(10, i);
        n = n / 2;
        i++;
    }
    return bin;
}
int bin_add(long long int n1, long long int n2)
{
    int dec_n1 = bin_dec(n1);
    int dec_n2 = bin_dec(n2);
    int ans_dec = dec_n1 + dec_n2;
    int ans_bin = dec_bin(ans_dec);

    return ans_bin;
}
int main()
{
    long long int n1 = 0, n2 = 0;
    printf("Enter the first binary number: ");
    scanf("%lld", &n1);
    printf("Enter the second binary number: ");
    scanf("%lld", &n2);
    // function for adding two binary numbers
    int ans = bin_add(n1, n2);
    printf("The sum of given two binary number is %d\n\n", ans);
    return 0;
}
