//performing operations in array
#include <stdio.h>

//traversal
void display(int arr[], int n){
    for(int i=0;i<n;i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

//insertion
int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity)
        return -1;
    for(int i=size-1; i>=index; i--)
        arr[i+1] = arr[i];
    arr[index] = element;
        return 1;
}

//deletion
void indDeletion(int arr[], int size, int index){
    for(int i = index; i < size-1; i++)
        arr[i] = arr[i+1];
}

//linearSearch
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
            return i;
       }
            return -1;    
}

//binarySearch
int binarySearch(int arr[], int size, int element){
   int mid,low=0,high=size-1;
   while(low<=high){
     mid = (low+high)/2;
     if(arr[mid]==element)
         return mid;
     if(arr[mid]<element)
         low = mid+1;
     else
         high = mid-1;
}  return -1;
}

//Insertion
void main(){
    int arr[100] = {7,8,12,27,88};
    int size = 4, element = 45, capacity = 100, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, capacity, index);
    size += 1;
    display(arr, size);
}//Deletion
void main(){
    int arr[100] = {7,8,12,27,88};
    int size = 5, index = 0;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
}//Linear search
void main(){
    int arr[] = {1,3,5,56,4,3,23,56,34};
    int size = sizeof(arr)/sizeof(int);
    int index = linearSearch(arr,size,4);
    printf("The element %d was found at index %d",4,index);
}//Binary search
void main(){
    int arr[] = {1,3,5,56,74,83,123,156,334};
    int size = sizeof(arr)/sizeof(int);
    int index = binarySearch(arr,size,56);
    printf("The element %d was found at index %d",56,index);
}
