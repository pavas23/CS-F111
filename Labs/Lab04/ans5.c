/*Q5. Write a C program to show the numbers, whose cubes are summed, to get the certain taxicab number.
CODE:*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the taxicab number:\n");
    scanf("%d", &num);
    int i = num;
    int int_count = 0;
    int a = 0, b = 0, c = 0, d = 0;
    for (unsigned long j = 1; j < num; j++)
    {
        for (unsigned long k = j + 1; k < num; k++)
        {
            if (j * j * j + k * k * k == num)
            {
                int_count += 1;
                if (int_count == 1)
                {
                    a = j;
                    b = k;
                }
                if (int_count == 2)
                {
                    c = j;
                    d = k;
                }
            }
        }
    }
    if (a != 0)
    {
        printf("the first pair of numbers, whose sum of cubes gives the taxicab number are: %d and %d\n\n", a, b);
    }
    if (c != 0)
    {
        printf("the second pair of numbers, whose sum of cubes gives the taxicab number are: %d and %d\n\n", c, d);
    }
    if (a == 0 && c == 0)
    {

        printf("the number entered is not a taxicab number\n\n");
    }
    return 0;
}
