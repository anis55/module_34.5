#include <stdio.h>

int main()
{

    FILE * inputFile;
    FILE * outputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL)
    {
        printf("File Not found.");
        return 0;
    }
    outputFile = fopen("output.txt", "w");

    int T, n;
    fscanf(inputFile, "%d", &T);

    for(int j = 0; j < T; j++)
    {
        fscanf(inputFile, "%d", &n);
        if(n<0) {
            for(int i=n;i<=-(n);i++) {
                if(i<=0) {
                    fprintf(outputFile, "%d ", i);
                }
                if(i>0) {
                    fprintf(outputFile, "%d ", i);
                }
            }
        }
        
        if(n>0) {
            for(int i=n;i>=-n;i--) {
                if(i>=0) {
                    fprintf(outputFile, "%d ", i);
                }
                if(i<0) {
                    fprintf(outputFile, "%d ", i);
                }
            }
        }
        fprintf(outputFile, "\n");
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}