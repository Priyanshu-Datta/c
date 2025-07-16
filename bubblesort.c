#include<stdio.h>
int main(){
int a[6]={3,56,21,6,4,7};
int i,j,t;
for(i=0;i<6;i++){
    for(j=0;j<6-i-1;j++){
        if(a[j]>a[j+1]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
}
return 0;
}