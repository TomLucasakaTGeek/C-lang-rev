#include <stdio.h>
void main(){
    int a[20],n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter Elements:");
        scanf("%d\n",&a[i]);
    }
    
//bubble sort
    for(int b=0;b<n-1;b++){
    for(i=0;i<n-1;j++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
//selection sort
    for(int i=0;i<n-1;i++){
        int min=a[i];
        int pos=i;
        for(int j=i;j<n;j++){
            if(a[j]>min){
                a[j]=min;
                pos=j
            }
        }
        int t=a[i];
        a[i]=pos;
        a[pos]=t;
    }
//insertion sort
int key,j
for(int i=0;i<n;i++){
    key = a[i];
    j=i-1;
    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}

}