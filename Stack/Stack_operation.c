#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack overfloweded, Cannot push %d to the stack\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully.......\n");

    printf("Before pushing, FULL::: %d\n", isFull(sp));
    printf("Before pushing, EMPTY:::%d\n", isEmpty(sp));

    push(sp, 45);

    printf("After pushing, FULL::: %d\n", isFull(sp));
    printf("After pushing, EMPTY:::%d\n", isEmpty(sp));
    return 0;
}
