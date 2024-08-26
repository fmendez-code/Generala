#include <stdio.h>
#include "menu.c"
#include "tirardado.c"
#include "evaluardados.c"
#include "jugadas.c"

int main(){
    int i;
    int dados[5] = {5,5,5,5,5};
    int apariciones[6] = {0,0,0,0,0,0};
    int puntajes[10] = {0,0,0,0,0,0,0,0,0,0};
    char categorias[10] = {'1','2','3','4','5','6','E','F','P','G'};

    contar_repeticion(dados,apariciones);

    for(int i=0;i<6;i++){
        puntajes[i]=apariciones[i]*(i+1);
    }

    if(llamar_jugadas(puntajes,apariciones)){
        printf("Hubo jugada\n");
    } else {
        printf("No hubo jugada\n");
    }
    
    for(int i=0;i<10;i++){
        printf(" %c  |  ", categorias[i]);
        printf("%d\n", puntajes[i]);
    }


    printf("Apariciones: \n");
    for(i=0;i<6;i++){
        printf("%d: %d\n", i+1, apariciones[i]);
    }


    menujuego();

    printf("DADO: ");
    printf("%d\n", tirar_dado());

    return 0;
}