#include <stdio.h>

int main() {
    FILE * inputFile;
    FILE * outputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("File Not found.");
        return 0;
    }
    outputFile = fopen("output.txt", "a");
    int year;
    fscanf(inputFile, "%d", &year);

    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        fprintf(outputFile, "%d-->YES\n", year);
    } else {
        fprintf(outputFile, "%d-->NO\n", year);
    }

    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}