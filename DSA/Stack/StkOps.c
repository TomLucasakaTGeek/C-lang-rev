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
void push(struct Stack* ptr, int val) {
    if(isFull(ptr)) {
        printf("Stack Overflow");
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
void pop(struct Stack *ptr) {
    if(isEmpty(ptr)) {
        printf("Stack Underflow");
    }
    else {
        ptr->top--;
        
    }
}
int isFull(struct Stack *ptr) {
    if( ptr->top == ( ptr->size ) - 1 )
        return 1;
    else
        return 0;
}

int main() {
    struct Stack *sp = (struct Stack *)malloc(sizeof(struct Stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));
    push(sp, 56);
    printf("%d\n", isEmpty(sp));
    printf("%d\n", isFull(sp));

    return 0;
}