#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// case 1:: Deleting the first node
struct Node *deletefirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// Case 2:: Deleting the node at index
struct Node *deleteindex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    int i = 0;
    while (i < index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}
// Case 3:: Deleting the last node of linked list
struct Node *deletelast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
// case 4:: Deleting the element in a given value from the linked list
struct Node *deletebyvalue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    int i = 0;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

void linkedlisttransversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements: %d\n", ptr->data);
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

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 12;
    fourth->next = fifth;

    fifth->data = 78;
    fifth->next = NULL;
    printf("Linked list before deletion\n");
    linkedlisttransversal(head);

    // head = deletefirst(head);
    printf("Linked List after deletion\n");
    // head = deleteindex(head, 3);
    // head = deletelast(head);
    head = deletebyvalue(head,12);
    linkedlisttransversal(head);
}