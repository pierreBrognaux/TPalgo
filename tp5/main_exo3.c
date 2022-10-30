#include <stdio.h>

int main(){
    int tableaudouble[4][3] = {{0}}, tableausimple[12] = {0},a=0;
    for(int i=0;i<=3;i++) {
        for (int j = 0; j <= 2; j++) {
            scanf("%d", &tableaudouble[i][j]);
        }
    }
    for(int i=0;i<=3;i++) {
        for (int j = 0; j <= 2; j++) {
            tableausimple[a] = tableaudouble[i][j];
            a++;
        }
    }
    for(int i=0;i <= 11;i++){
        printf("%d/",tableausimple[i]);
    }
}