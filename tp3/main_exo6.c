#include <stdio.h>


int main(){
    float nbr, note, moyenne = 0;
    int a=0;
    printf("combien de notes voulez vous saisir ?\n");
    scanf("%f",&nbr);
    printf("veuillez saisir vos notes\n");
    for(a;a<nbr;) {
        printf(">>");
        scanf("%f", &note);
        if(0<=note && note<=20) {
            moyenne += note;
            a += 1;
        }
        else{
            printf("veuilliez rentrer une note comprise entre 0 et 20\n");
        }
    }
    moyenne /= nbr;
    printf("votre moyenne est de %f/20.\n",moyenne);
}
