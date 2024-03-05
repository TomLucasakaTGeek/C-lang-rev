#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//Traversal 
void Traversal(struct Node* ptr) {
    while(ptr != NULL) {
        printf("Elements = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//delete head node
struct Node* deleteFirst(struct Node* head){
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

//delete from an index
struct Node* deleteAtIndex(struct Node* head, int index){
    struct Node* p=head;
    struct Node* q=head->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}

//delete the tail
struct Node* deleteLast(struct Node* head){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//delete a value
struct Node* deleteAtIndex(struct Node* head, int key){
    struct Node* p=head;
    struct Node* q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data == value){
        p->next=q->next;
        free(q);
    }
    return head;
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
    //last node
    last->data = 3;
    last->next = NULL;

    printf("Linkedlist before deletion");
    Traversal(head);
    //Delete Head
    head=deleteFirst(head);
    printf("LinkedList after deleting Head\n");
    Traversal(head);
    //Delete from an Index
    head=deleteAtIndex(head,2);
    printf("LinkedList after deleting at any index\n");
    Traversal(head);
    //Delete Tail
    head=deleteLast(head);
    printf("LinkedList after deleting Head\n");
    Traversal(head);
    //Delete the value
    head=deleteAtIndex(head,7);
    printf("LinkedList after deleting given value\n");
    Traversal(head);
    
}
