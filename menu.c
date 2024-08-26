#include <stdio.h>
#include "modos.c"

void menujuego(){
    int respuesta;

    printf("Seleccione modo de juego:\n");
    printf("1-Partida en solitario.\n");
    printf("2-Partida con 2 jugadores.\n");
    
    scanf("%d", &respuesta);

    if(respuesta==2){
        multijugador();
    } else {
        solitario();
    }

    return;
}