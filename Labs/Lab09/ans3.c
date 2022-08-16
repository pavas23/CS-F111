/*3. Write a C program to print a [a x a] matrix, for a given order a, which consists of numbers from 1 to a^2 and each number must occur exactly once. The sum of elements in the row, column and the diagonal must be the same. Read the order of the matrix using the ‘order’ variable. Use a conditional statement to check whether the order is odd or even. If it is found to be even exit the program.
CODE:*/

#include <stdio.h>
int main()
{
    int order = 0;
    printf("Enter the order of matrix: ");
    scanf("%d", &order);
    int m[order][order];
    for (int i = 0; i < order; i++)
    {
        for (int j = 0; j < order; j++)
        {
            m[i][j] = 0;
        }
    }
    if (order % 2 == 0)
    {
        printf("Order is not odd hence Program is terminated\n");
    }
    else
    {
        int i = 0, j = order / 2;
        m[i][j] = 1;
        int ti = i;
        int tj = j;
        for (int n = 2; n <= order * order; n++)
        {
            ti = i;
            tj = j;
            if (j == order - 1)
            {
                tj = 0;
            }
            else
            {
                tj++;
            }
            if (i == 0)
            {
                ti = order - 1;
            }
            else
            {
                ti--;
            }
            if (m[ti][tj] == 0)
            {
                i = ti;
                j = tj;
            }
            else
            {
                if (i == order - 1)
                {
                    i = 0;
                }
                else
                {
                    i++;
                }
            }
            m[i][j] = n;
        }
        for (int i = 0; i < order; i++)
        {
            for (int j = 0; j < order; j++)
            {

                printf("%d\t", m[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

