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
    int arr[n];
    int sum = 0;

    
    for(i=0; i<n; i++) {
        fscanf(inputFile, "%d", &arr[i]);
    }
    
    for(i=0;i<n;i++) {
        sum = sum + arr[i] % 10;
    }
    
    fprintf(outputFile, "Sum = %d", sum);
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}