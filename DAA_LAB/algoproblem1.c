#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decToBinary(int num, char *binary, int index) {
    if (index < 0)
        return;
    binary[index] = (num % 2) ? '1' : '0';
    decToBinary(num / 2, binary, index - 1);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s \n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    char *inputFile = argv[2];
    char *outputFile = argv[3];

    FILE *in = fopen(inputFile, "r");
    if (!in) {
        perror("Error opening input file");
        return 1;
    }
    FILE *out = fopen(outputFile, "w");
    if (!out) {
        perror("Error opening output file");
        fclose(in);
        return 1;
    }

    int num, count = 0;
    while (count < n && fscanf(in, "%d", &num) == 1) {
        char binary[17];                 
        memset(binary, '0', 16);       
        binary[16] = '\0';             

        decToBinary(num, binary, 15);   
        fprintf(out, "The binary equivalent of %d is %s\n", num, binary);
        count++;
    }

    fclose(in);
    fclose(out);

    out = fopen(outputFile, "r");
    if (!out) {
        perror("Error reading output file");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), out)) {
        printf("%s", line);
    }

    printf("\nConversion to binary was successful.\n");
    fclose(out);

    return 0;
}
