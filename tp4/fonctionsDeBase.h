#include <stdio.h>

int getMax(int a,int b){
    return (a >= b)?(a):(b);
};
int saisirEntier(int a){
    scanf("%d", &a);
    return a;
}
float saisirFloat(){
    float a;
    scanf("%f", &a);
    return a;
}
float calculAire(float longeur,float largeur){
    return longeur * largeur;
}
float calculPerimetre(float longeur,float largeur){
    return (longeur+largeur)*2;
}
int multipleDe(int nombre, int multiple){
    return (nombre % multiple == 0) ? 1 : 0;
}
float moyennepour3(int note1, int note2, int note3){
    float moyenne = 0;
    if(0<=note1 && note1<=20 && 0<=note2 && note2<=20 && 0<=note3 && note3<=20 ){
        moyenne = note1+note2+note3;
        return moyenne /= 3;
    }
    else return -1;
}