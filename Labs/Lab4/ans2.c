/*Q2. Write a C program to find the reverse of the number taken from the user.
CODE :*/

#include <stdio.h>
#include <math.h>
int main()
{
    int num = 0;
    int original_num = 0;
    int i = 0, r = 0;
    int rev = 0, power = 0;
    printf("hello user,enter any number:\n");
    scanf("%d", &num);
    original_num = num;
    while (num > 0)
    {
        num = num / 10;
        i++;
    }
    while (original_num > 0)
    {
        r = original_num % 10;
        power = pow(10, i - 1);
        rev += r * power;
        i--;
        original_num = original_num / 10;
    }
    printf("The reverse of the given number is : %d\n", rev);
    return 0;
}
