#include <stdio.h>
#include <stdlib.h>


#define MAXSIZE 10

struct arrayStack
{
    int top;
    int capacity;
    int *array;

};

struct arrayStack *createStack()
{
    struct arrayStack *S = malloc(sizeof(struct arrayStack));
    if(!S)
        return NULL;
    S->capacity = MAXSIZE;
    S->top = -1;
    S->array = malloc(S->capacity * sizeof(int));
    if(!S->array)
        return NULL;
    return S;
}

int isEmptyStack(struct arrayStack *S)
{
    return (S->top == -1);
}

int isFullStack(struct arrayStack *S)
{
    return (S->top == S->capacity - 1);
}

void push(struct arrayStack *S, int data)
{
    if(isFullStack(S))
        printf("Stack Overflow = ");
    else
        S->array[++S->top] = data;
}

int pop(struct arrayStack *S)
{
    if(isEmptyStack(S))
    {
        printf("\nStack is Empty = ");
        return 0;
    }
    else
        return (S->array[S->top--]);
}

void deleteStack(struct arrayStack *S)
{
    if(S)
    {
        if(S->array)
            free(S->array);
        free(S);
    }
}

int main()
{
    struct arrayStack *S = createStack();

    push(S, 1);
    push(S, 2);
    push(S, 3);
    push(S, 4);
    push(S, 5);
    push(S, 6);
    push(S, 7);
    push(S, 8);
    push(S, 9);
    push(S, 10);

    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    printf("%d ", pop(S));
    

    
    return 0;
}
