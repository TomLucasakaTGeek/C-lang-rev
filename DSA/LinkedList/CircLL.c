#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//Traversal 
void Traversal(struct Node* head) {
    struct Node* ptr = head;
    do{
       printf("Element = %d\n", ptr->data);
       ptr=ptr->next;
    }while(ptr != head);
}

void main() {
  struct Node* head, second, last;
  //Allocate memory for Nodes
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  last = (struct Node*)malloc(sizeof(struct Node));

    //head(or first) node
    head->data = 1;
    head->next = second;
    //second node
    second->data = 2;
    second->next = last;
    //last node(circular)
    last->data = 3;
    last->next = head;

    Traversal(head);
}
