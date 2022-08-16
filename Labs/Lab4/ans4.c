/*Q4. Write a C program to check if the given number is in binary format or not.
Hint: Here we are not going to check any base of the number. As you know we can represent any number in binary format like in 0 and 1. Just like the binary representation of 2 is 0010. So we will check only if the given input number has 0 and 1 or any other Digits.
CODE:*/
#include <stdio.h>
int main()
{
    int num = 0;
    int r = 0, flag = 0;
    printf("hello user, enter any number:\n");
    scanf("%d", &num);
    while (num > 0)
    {
        r = num % 10;
        if (r != 0 && r != 1)
        {
            flag = 1;
            break;
        }
        num = num / 10;
    }
    if (flag == 1)
    {
        printf("The given number is not binary number\n");
    }
    else
    {
        printf("The given number is binary\n");
    }
    return 0;
}
