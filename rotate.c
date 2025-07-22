#include<stdio.h>
void rotate(int arr[],int index,int n){
    int prev= arr[0];
    int temp=arr[index-1];
    for(int i=0;i<index-1;i++){
        int curr=arr[i+1];
        arr[i+1]=prev;
        prev=curr;
    }
    arr[0]=temp;

    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);
    }    
}

int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("enter the index from that you want to rotate");
    scanf("%d",&index);
    rotate(arr,index,n);
    return 0;
}