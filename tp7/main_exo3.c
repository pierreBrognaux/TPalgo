#include "fonctionsDeBases.h"

int main(){
    int min,max;
    printf("sur quelle ensemble voulez vous jouer ? (min/max)\n");
    scanf("%d/%d",&min,&max);
    int nombre = GetRandomInteger(min,max);
    int choix,coups = 0;
    printf("entrez votre premier nombre\n");
    do{
        scanf("%d",&choix);
        if(choix < nombre){
            printf("plus\n");
        }
        else if(choix > nombre){
            printf("moins\n");
        }
        coups++;
    }
    while(choix != nombre);
    printf("vous avez trouvez en %d coups.\n",coups);
}