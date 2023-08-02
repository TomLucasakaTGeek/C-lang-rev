#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times you want to print your name:");
    scanf("%d", &n);
    char name[25];
    printf("\nEnter your name:");
    scanf("%s", name);
  //do while is used when we want the execute the body of loop before testing the condition
    do{                               //syntax of do while:
        printf("%s\n", name);          // do{ <operation> }while(condition);
        n--;
    }while(n < 0);
    return 0;
}
