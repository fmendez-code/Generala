#include <stdio.h>

void contar_repeticion(int dados[], int veces[]){
    int i;
    int dado, numero;

    for(dado=0;dado<5;dado++){
        for(numero=1;numero<=6;numero++){
            if(dados[dado]==numero){
                printf("Se encontro numero %d en posicion %d\n", numero, dado);
                veces[numero-1]++;
            }
        }
    }

    for(i=0;i<6;i++){
        printf("%d: %d\n", i+1, veces[i]);
    }
    return;
}