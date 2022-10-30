#include "fonctionsDeBase.h"

int main(){
    int nombre = saisirEntier(), multiple = saisirEntier();
    int const val = 10;
    (multipleDe(nombre,multiple)) ? (printf("votre nombre est un multiple de %d\n", multiple)) :
    (printf("votre nombre n'est pas un multiple de %d\n", multiple));
    nombre >= 10 ? printf("%d est superieur ou egal a 10", nombre) : printf("votre nombre %d est inferieur a 10", nombre);
}