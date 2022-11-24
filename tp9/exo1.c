#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char a[100] = {0};
    scanf("%s",a);
    printf("%s",a);
    FILE *pt_fichier = NULL;
    pt_fichier = fopen("C:\\ecole\\projets_Clion\\TPalgo\\test.txt","r+");
    for(int i=0 ; i < strlen(a);i++) {
        fprintf(pt_fichier, "%c", a[i]);
    }
    fclose(pt_fichier);
    pt_fichier = NULL;
}