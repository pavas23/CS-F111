/*Q.7 Declare a two dimensional character array and store the values as “Zero”, “One”, “Two”,”Three”,
“Four”, “Five”,... Accept a number and display it in words.
Hint : If the number is 3450 then with the help of the array it should be displayed as “Three Four Five
Zero”.
CODE :*/
#include <stdio.h>
int main(void)
{
    char arr[10][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int r = 0, i = 0, n = 0, k = 0;
    printf("Enter any number:\n");
    scanf("%d", &n);
    int arr1[50]; // arr1 for storing the digits of the numnber entered by the user while(n>0)
    {
        r = n % 10;
        arr1[i] = r;
        n = n / 10;
        i++;
    }
    int x = i + 1;
    for (int j = 1; j < i + 1; j++)
    {
        k = arr1[x - j - 1];
        int z = 0;
        while (arr[k][z] != '\0')
        {
            printf("%c", arr[k][z]);
            z++;
        }
        printf(" ");
    }
    printf("\n\n");
    return 0;
}
