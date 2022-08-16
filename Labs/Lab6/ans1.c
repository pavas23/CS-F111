
/*(1) Rewrite the following code fragment using one switch statement. Add any other needed declarations
or assignments. Run the code and submit the screenshot of the run. if (ch == ‘A’ || ‘a’)
countA++;
else if (ch == ‘C’ || ‘c’)
countC++;
else printf (“error...”);
CODE :*/
#include <stdio.h>
int main()
{
    char ch;
    int countA = 0, countC = 0;
    printf("Hello user,Enter any character:\n");
    scanf(" %c", &ch);
    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a':
        {
            countA++;
            break;
        }
        case 'A':
        {
            countA++;
            break;
        }
        case 'c':
        {
            countC++;
            break;
        }
        case 'C':
        {
            countC++;
            break;
        }
        default:
        {
            printf("\nerror...\n");
            break;
        }
        }
        printf("count of A: %d\ncount of C: %d\n", countA, countC);
        printf("Hello user,Enter any character:\n");
        scanf(" %c", &ch);
    }
    return 0;
}
