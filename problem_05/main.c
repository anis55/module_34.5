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
    outputFile = fopen("output.txt", "w");

    int i, j, k, n;
    fscanf(inputFile, "%d", &n);

    for(i=1; i<=n; i++) {

        for(j=n-i; j>0; j--) {
            fprintf(outputFile, " ");
        }
        for(k=0; k<n; k++) {
            fprintf(outputFile, "#");
        }

        fprintf(outputFile, "\n");
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}