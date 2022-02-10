#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("This queue is full.....!!!!");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This queue is empty.....!!!!");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct Queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue Few elements
    enqueue(&q, 12);
    enqueue(&q, 45);
    enqueue(&q, 19);

    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 

    enqueue(&q, 76);
    enqueue(&q, 469);
    enqueue(&q, 774);

    if (isFull(&q))
    {
        printf("Queue is full");
    }
    if (isEmpty(&q))
    {
        printf("Queue is Empty");
    }

    return 0;
}
