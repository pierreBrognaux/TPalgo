#include <stdio.h>
#include <stdlib.h>

int main(){
int* notes = malloc(5*sizeof(int));
for(int i = 0; i <= 20;i++){
    printf("%d\n",notes[i]);
}
free(notes);
}