#include <stdio.h>
#include <string.h>

void initEntierReel(int *entier, float *reel) {
    *entier = 1;
    *reel = 2;
}
void procedure(int a, int b, int *pt_quotient, int *pt_reste){
    *pt_quotient = a/b;
    *pt_reste = a%b;
}
void echangeVariable(int *a,int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int additionnerTableau(const int tableau[100], int nombresDeNombres){
    int somme = 0;
    for(int i=0;i < nombresDeNombres; i++){
        somme += tableau[i];
    }
    return somme;
}
int multipliertableau(const int tableau[100], int nombresDeNombres){
    int somme = 1;
    for(int i=0;i < nombresDeNombres; i++){
        somme *= (tableau[i]);
    }
    return somme;
}
typedef struct Point{
    float x;
    float y;
}Point;
void echangePoint(Point *p1,Point *p2){
    float tempx = p1->x,tempy = p1->y;
    (*p1).x = p2->x;
    (*p1).y = p2->y;
    p2->x = tempx;
    p2->y = tempy;
}