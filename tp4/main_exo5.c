#include "fonctionsDeBase.h"

int main(){
    int note1 = saisirEntier(), note2 = saisirEntier(), note3 = saisirEntier();
    float res = moyennepour3(note1,note2,note3);
    if(res != -1){
        printf("votre moyenne est de %f", res);
    }
    else{
        printf("veuilliez ecrire des notre entre 0 et 20.");
    }
}