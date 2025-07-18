#include <stdio.h>


int isLittleEndian() {
    unsigned int x = 1;
    return (*(char*)&x == 1);
}

 int convertEndian(unsigned int num) {
    return ((num >> 24) & 0x000000FF) | 
           ((num >> 8)  & 0x0000FF00) | 
           ((num << 8)  & 0x00FF0000) | 
           ((num << 24) & 0xFF000000);  
}

int reversenumber(unsigned int num){
     int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main(){
int num;
printf("Enter a number: ");
scanf("%u", &num);

if(isLittleEndian()){
printf("it is Little Endian\n");
}else{
printf("It is BIg Endian\n");
}

int converted = convertEndian(num);
printf("Converted Endian value of %u: %u\n", num, converted);

int reversed = reversenumber(num);
    printf("Reversed Number: %u\n", reversed);
    if (isLittleEndian()) {
        printf("System is still Little Endian for reversed number\n");
    } else {
        printf("System is still Big Endian for reversed number\n");
    }
}