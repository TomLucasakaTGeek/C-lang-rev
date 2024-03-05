#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
}

//Traversal 
void Traversal(struct Node* ptr) 
{
    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }while(ptr->next!=NULL);
}

//Reversal
void Reversal(struct Node* ptr) 
{
    do
    {
        printf("%d\t", ptr->data);
        ptr = ptr->prev;
    }while(ptr->prev != NULL);
}

void main(){
    struct Node* N1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* N2=(struct Node*)malloc(sizeof(struct Node));struct Node* N3=(struct Node*)malloc(sizeof(struct Node));
    
    //First Node
    N1->prev = NULL;
    N1->data = 1;
    N1->next = N2;
    //Second Node
    N2->prev = N1;
    N2->data = 2;
    N2->next = N3;
    //Third Node
    N3->prev = N2;
    N3->data = 3;
    N3->next = NULL;

    Traversal(N1);
    
    printf("\nReversing")
    Reversal(N3);
}