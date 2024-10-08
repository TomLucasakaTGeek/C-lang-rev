#include<stdio.h>
#include<stdlib.h>

struct Stack {
    int data;
    int top;
    int *arr;
};

int isEmpty(struct Stack *ptr) {
    if( ptr->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct Stack *ptr) {
    if( ptr->top == ( ptr->size ) - 1 )
        return 1;
    else
        return 0;
}

int main() {
    struct Stack s;
    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    if(isEmpty(s)) {
        printf("Stack is Empty");
    }
    else {
        printf("Stack is not Empty");
    }
    return 0;
}