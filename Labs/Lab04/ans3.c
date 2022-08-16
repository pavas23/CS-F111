
/*Q3. Write a C program that accepts input from the user and checks if the number is equal to the sum of its positive divisors, excluding the number itself i.e. is a perfect number or not.
CODE:*/

#include <stdio.h> 
int main()
{
    int num = 0;
    int sum = 0;
    printf("hello user, enter any number:\n ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (num == sum)
    {
        printf("The number is a perfect number\n");
    }
    else
    {
        printf("The number is not a perfect number\n");
    }
    return 0;
}

