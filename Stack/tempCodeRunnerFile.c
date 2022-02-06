void pop(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("stack underflowfloweded, Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
    }
}