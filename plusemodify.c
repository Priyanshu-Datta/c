#include<stdio.h>
void modify(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int curr=arr[i];
        arr[i]=arr[i-1]+arr[i];

    }
}

int main(){
    int n;
    printf("enter the size if the array");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");


    modify(arr,n);

    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}