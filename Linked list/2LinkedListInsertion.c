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

// case 1
struct Node *insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// case 2
struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// case 3
struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//case 4
struct Node *insertafteernode(struct Node *head, struct Node *prevnode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
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

    printf("Elements before insertion\n");
    linkedlistTransversal(head);
    printf("\n\nElements after insertion\n");
    // head = insertatfirst(head, 21);
    // head = insertatindex(head, 78, 3);
    // head=insertatend(head,452);
    head=insertafteernode(head,fifth,452);
    linkedlistTransversal(head);
}