#include <stdio.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)

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
int isfull(struct stack *ptr)
{
    if (ptr->top == -ptr->size - 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // check is stack is empty
    if (isempty(s))
    {
        printf("the stack is empty");
    }
    else
    {
        printf("the stack is not empty");
    }
    return 0;
}