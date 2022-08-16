/*2. Extend the program in Que. 4 to allot 15 students competing for 3 seats each in
CSE, Civil and EEE departments.
CODE :*/

#include <stdio.h>
int main()
{
    int applicationno[15], bitsat[30], physics[15], chem[15], math[15], passingyear[15];
    int seats[] = {3, 3, 3};
    int preference[45];
    int result[15];
    int eligibility[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 15; i++)
    {
        printf("Enter student %d's application number: ", i + 1);
        scanf("%d", &applicationno[i]);
        printf("Enter student %d's BITSAT score: ", i + 1);
        scanf("%d", &bitsat[2 * i]);
        bitsat[2 * i + 1] = i;
        printf("Enter student %d's Physics board marks: ", i + 1);
        scanf("%d", &physics[i]);
        printf("Enter student %d's Chemistry board marks: ", i + 1);
        scanf("%d", &chem[i]);
        printf("Enter student %d's Math board marks: ", i + 1);
        scanf("%d", &math[i]);
        printf("Enter student %d's Pass year: ", i + 1);
        scanf("%d", &passingyear[i]);
        printf("Enter student %d's preference order (0 for CS, 1 for EEE, 2 for Civil): \n", i + 1);
        for (int j = 3 * i; j < 3 * (i + 1); j++)
        {
            scanf("%d", &preference[j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 15; i++)
    {
        float aggrigate;
        aggrigate = (physics[i] + chem[i] + math[i]) / 3;
        if (aggrigate >= 75 && math[i] >= 60 && physics[i] >= 60 && chem[i] >= 60)
        {
            if (bitsat[2 * i] > 240)
            {
                if (passingyear[i] == 2020 || passingyear[i] == 2021)
                {
                    eligibility[i] = 1;
                }
            }
        }
    }
    for (int i = 0; i < 30; i += 2)
    {
        for (int j = i + 2; j < 30; j += 2)
        {
            if (bitsat[i] < bitsat[j])
            {
                int tempMark = bitsat[i], tempIndex = bitsat[i + 1];
                bitsat[i] = bitsat[j];
                bitsat[i + 1] = bitsat[j + 1];
                bitsat[j] = tempMark;
                bitsat[j + 1] = tempIndex;
            }
        }
    }
    for (int i = 0; i < 15; i++)
    {
        int index = bitsat[2 * i + 1];
        if (eligibility[index] == 0)
        {
            result[index] = 3;
        }
        else
        {
            int pref1 = preference[3 * index];
            int pref2 = preference[3 * index + 1];
            int pref3 = preference[3 * index + 2];
            if (seats[pref1] != 0)
            {
                result[index] = pref1;
                seats[pref1] -= 1;
            }
            else if (seats[pref2] != 0)
            {
                result[index] = pref2;
                seats[pref2] -= 1;
            }
            else if (seats[pref3] != 0)
            {
                result[index] = pref3;
                seats[pref3] -= 1;
            }
            else
            {
                result[index] = 3;
            }
        }
    }
    printf("Allotment: \n");
    for (int i = 0; i < 15; i++)
    {
        printf("Student %d: \n", i + 1);
        printf("App. No. %d\n", applicationno[i]);
        switch (result[i])
        {
        case 0:
            printf("CS\n");
            break;
        case 1:
            printf("EEE\n");
            break;
        case 2:
            printf("Civil\n");
            break;
        case 3:
            printf("-\n");
            break;
        }
    }
}
