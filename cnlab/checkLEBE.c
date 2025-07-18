#include<stdio.h>

 int isLittleEndian() {
    int x = 1;
    return (*(char*)&x == 1);
    }
  int convertEndian(unsigned int num) {
    return ((num >> 24) & 0x000000FF) | 
           ((num >> 8)  & 0x0000FF00) | 
           ((num << 8)  & 0x00FF0000) | 
           ((num << 24) & 0xFF000000);  
}

int main(){
    int num;
    printf("enter the size of the number: ");
    scanf("%d",&num);
     char *ptr = (char *)&num;

    printf("\nUsing pointer casting:\n");
    printf("Byte 0: 0x%02X\n", ptr[0]);
    printf("Byte 1: 0x%02X\n", ptr[1]);
    printf("Byte 2: 0x%02X\n", ptr[2]);
    printf("Byte 3: 0x%02X\n", ptr[3]);

    if(isLittleEndian()){
    printf("it is Little Endian\n");
    }else{
    printf("It is BIg Endian\n");
    }
     int converted = convertEndian(num);
    printf("Converted Endian value of %u: %u\n", num, converted);



    return 0;
}