#include <stdlib.h>
#include <stdio.h>


int main(void) {
    int nbNumbers = 15;
    double number[5] = {3.43, 6.354, 5.6, 123.23, 64.2};
    FILE* pf = NULL;
    pf = fopen("C:\\ecole\\projets_Clion\\TPalgo\\text.txt", "w");
    fwrite(&nbNumbers, sizeof(int), 1, pf);
    fclose(pf);
    pf = NULL;
    return 0;
}