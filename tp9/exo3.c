#include <stdlib.h>
#include <stdio.h>


int main(void) {
    int a= 0;
    FILE* pf = NULL;
    pf = fopen("C:\\ecole\\projets_Clion\\TPalgo\\text.txt", "r");
    fread(&a, sizeof(int), 1, pf);
    fclose(pf);
    printf("%d",a);
    pf = NULL;
    return 0;
}