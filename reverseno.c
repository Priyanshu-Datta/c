#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    int t;
    int rev=0;

    while(n!=0){
        t = n%10;
        rev= (rev*10)+t;
        n=n/10;
    }
    printf("%d",rev);

}