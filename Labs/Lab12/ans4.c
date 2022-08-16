/*4. Write a C program to split the given linked list into even linked list and odd linked list.
CODE:*/

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *mainList = NULL;
struct node *odd = NULL;
struct node *even = NULL;
void printList(struct node *head)
{
    struct node *ptr = head;
    printf("[head] =>");
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }
    printf(" [null]\n");
}
// Print the main Linked List
void insert(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    struct node *current;
    link->data = data;
    link->next = NULL;
    if (mainList == NULL)
    {
        mainList = link;
        return;
    }
    current = mainList;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = link;
}
// Split the Linked List into two
void split_list()
{
    struct node *link;
    struct node *current;
    while (mainList != NULL)
    {
        struct node *link = (struct node *)malloc(sizeof(struct node));
        link->data = mainList->data;
        link->next = NULL;
        if (mainList->data % 2 == 0)
        {
            if (even == NULL)
            {
                even = link;
                mainList = mainList->next;
                continue;
            }
            else
            {
                current = even;
                while (current->next != NULL)
                {
                    current = current->next;
                }
                current->next = link;
            }
            mainList = mainList->next;
        }
        else
        {
            if (odd == NULL)
            {
                odd = link;
                mainList = mainList->next;
                continue;
            }
            else

            {
                current = odd;
                while (current->next != NULL)
                {
                    current = current->next;
                }
                current->next = link;
            }
            mainList = mainList->next;
        }
    }
}
int main()
{
    int num;
    for (num = 1; num <= 10; num++)
    {
        insert(num);
    }
    printf("Complete list: \n");
    printList(mainList);
    split_list();
    printf("\nOdd : ");
    printList(odd);
    printf("Even : ");
    printList(even);
    return 0;
}

