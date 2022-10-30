#include "fonctionsDeBase.h"

int main(){
    float longeur = saisirFloat(), largeur = saisirFloat();
    printf("l'aire de ce rectangle est de %f et le perimetre de %f", calculAire(longeur,largeur),calculPerimetre(longeur,largeur));
}