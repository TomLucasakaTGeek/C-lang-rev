#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//LinkedList 
struct Node {
    int data;
    struct Node* next;
} ;
// Stack using array
struct StackArr {
    int size;
    int top;
    int *arr[];
} ;
//Stack using LinkedList
struct StackList {
    int data;
    struct StackList* top; 
} ;
//Queue using array
struct QueueArr {
    int size;
    int front;
    int back;
    int *arr[];
} ; 
//Queue using LinkedList
struct QueueList {
    
} ;
//Binary Tree 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}

int main() {

    return 0;
}