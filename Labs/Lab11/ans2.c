/*task 2
take two dates from the user storing in structures as date/month/year and then find out the years months and days between the dates, i.e. age calculator
CODE:*/

#include <stdio.h>
typedef struct date
{
    int year;
    int month;
    int day;
} date;
int main(void)
{
    date cur, old;
    printf("Enter date 1 in dd-mm-yyyy form: ");
    scanf("%d-%d-%d", &old.day, &old.month, &old.year);
    printf("Enter date 2 in dd-mm-yyyy form: ");
    scanf("%d-%d-%d", &cur.day, &cur.month, &cur.year);
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int yeardif = cur.year - old.year - 1;
    int monthdif = 0, daydif = 0;
    if (cur.day >= old.day && cur.month >= old.month)
    {
        yeardif++;
        monthdif = cur.month - old.month;
        daydif = cur.day - old.day;
    }
    else if (cur.day < old.day && cur.month > old.month)
    {
        monthdif = cur.month - old.month - 1;
        yeardif++;
        daydif = cur.day - old.day + month[cur.month - 2];
    }
    else if (cur.day < old.day && cur.month <= old.month)
    {
        monthdif = cur.month - old.month - 1 + 12;
        daydif = cur.day - old.day + month[cur.month - 2];
    }
    printf("Difference between the two given dates date1 and date2 is : %d years, %d months, %ddays\n\n", yeardif, monthdif, daydif);
    return 0;
}
