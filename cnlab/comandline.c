#include <stdio.h>
#include <stdlib.h>  

void showValues(int *a, int *b) {
    printf("Value of a = %d\n", *a);
    printf("Value of b = %d\n", *b);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]); 
    int y = atoi(argv[2]);

    printf("Before swapping:\n");
    showValues(&x, &y);

    swap(&x, &y);

    printf("After swapping:\n");
    showValues(&x, &y);

    return 0;
}