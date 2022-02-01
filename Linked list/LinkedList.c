#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTransversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 41;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 75;
    fourth->next = fifth;

    fifth->data = 96;
    fifth->next = NULL;

    linkedlistTransversal(head);
}