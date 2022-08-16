/*1. Modify the practice program-1 to reverse alternate characters of a string using pointers. You cannot introduce any other additional variable. Sample Input/Outputs:
CODE:*/

#include <stdio.h>
void display(int *j, int n)
{
    int i;
    for (i = 0; i < n / 2; i += 2)
    {
        *(j + i) = *(j + i) + *(j + n - 1 - i);
        *(j + n - 1 - i) = *(j + i) - *(j + n - 1 - i);
        *(j + i) = *(j + i) - *(j + n - 1 - i);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(j + i));
    }
}
int main()
{
    int marks[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(&marks[0], 10);
    printf("\n");
    return 0;
}

