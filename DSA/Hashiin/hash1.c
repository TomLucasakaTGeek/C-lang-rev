#include<stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    //precompute
    int hash[13] = {0};
    for(int i=0; i<n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    scanf("%d", &q);
    while (q--)
    {
        int number;
        scanf("%d", &number);
        //fetch
        printf("%d", hash[number]);
    }

    return 0;
}

