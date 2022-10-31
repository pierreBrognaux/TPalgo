#include "fonctionsDeBases.h"

int main(){
    char car;
    char chaine[100] = {0};
    printf("quelle lettre voulez vous compter ?\n");
    scanf("%c",&car);
    printf("entrez votre chaine de caracteres :\n");
    scanf("%s",chaine);
    int nombre = nombresDeCaracteres(chaine,car);
    printf("il y a %d %c dans votre chaine\n",nombre,car);
}