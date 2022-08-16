
/*Q.8 Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
- There are 21 matchsticks,
- The computer asks the user to pick 1, 2, 3, or 4 matchsticks,
- After user picks, the customer does its picking. And this pattern repeats... - Whoever is forced to pick up the last matchstick loses the game.
CODE:*/

#include <stdio.h>
int main()
{
    int n = 21;
    int x = 0;
    int y = 0;
    while (n >= 1)
    {
        printf("Total Match Sticks remaining: %d\n", n);
        printf("Pick up the matchsticks between (1 to 4) ");
        scanf("%d", &x);
        if (x > 4)
        {
            printf("Invalid entry: Game ends...");
            break;
        }
        y = 5 - x;
        printf("Computer picks up the %d matchsticks.", y);
        printf("\n");
        n = n - x - y; // n is the number of matchsticks remaining at any time
        if (n == 1)
        {
            printf("\nYou lost and computer won. ");
            break;
        }
    }
    return 0;
}
