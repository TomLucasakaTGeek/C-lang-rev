#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

//Traversal 
void Traversal(struct Node *ptr) {
    while(ptr != NULL) {
        printf("Elements = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Insertion at First
struct Node *insertAtFirst(struct Node *head, int data) 
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

//Insert at any Index
struct Node *insertAtIndex(struct Node *head, int data, int index) 
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

//Insert at Last Index
struct Node *insertAtEnd(struct Node *head) 
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    while(p->next!=NULL) 
    {
        p=p->next;
    }

    p->next=ptr;
    ptr->next=NULL;
    return head;
}

int main() 
{
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
    //last node
    last->data = 3;
    last->next = NULL;

    Traversal(head);
    head=insertAtFirst(head);
    head=inserAtIndex(head, 56,1);
    head=insertAtEnd(head,76);
    Traversal(head);
    return 0;
}

