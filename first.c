#include<stdio.h>
int main(){
    int n;

    printf("enter the no. of elements ");
    scanf("%d",&n);

    int arr[n];

    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0],max2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }else if(arr[i]>max2 && arr[i]!=max){
            max2=arr[i];
        }
    }

    printf("the largest= %d and second largest= %d ",max,max2);

    int min=arr[0],min2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min2=min;
            min=arr[i];
        }else if(arr[i]<max2 && arr[i]!=min){
            min2=arr[i];
        }
    }  
    
    printf("the smalest= %d and second smalest= %d ",min,min2);   

    return 0;
}