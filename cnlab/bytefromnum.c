#include<stdio.h>
int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    char *ptr = (char *)&num;

    printf("\nUsing pointer casting:\n");
    printf("Byte 0: 0x%02X\n", ptr[0]);
    printf("Byte 1: 0x%02X\n", ptr[1]);
    printf("Byte 2: 0x%02X\n", ptr[2]);
    printf("Byte 3: 0x%02X\n", ptr[3]);

    return 0;

}