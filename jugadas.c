#include <stdio.h>
#define ESC 6
#define PESC 35
#define FUL 7
#define PFUL 50
#define POK 8
#define PPOK 75
#define GEN 9
#define PGEN 100

int escalera(int puntajes[], int apariciones[]);
int full(int puntajes[], int apariciones[]);
int poker(int puntajes[], int apariciones[]);
int generala(int puntajes[], int apariciones[]);

int llamar_jugadas(int P[], int A[]){
    if(escalera(P,A)||full(P,A)||poker(P,A)||generala(P,A)){
        return 1;
    }
    return 0;
}

int escalera(int puntajes[], int apariciones[]){
    int esc1=1, esc2=1;
    for(int i=0;i<5;i++){
        if(apariciones[i]==0){
            esc1=0;
        }
    }
    for(int i=1;i<6;i++){
        if(apariciones[i]==0){
            esc2=0;
        }
    }

    if(esc1||esc2){
        printf("Esc1 %d Esc2 %d\n", esc1, esc2);
        printf("Escalera\n");
        puntajes[ESC] = PESC;
        return 1;
    }
    return 0;
}

int full(int puntajes[], int apariciones[]){
    int rep3=0, rep2=0;
    for(int i=0;i<5;i++){
        if(apariciones[i]==3){
            rep3=1;
        } else if(apariciones[i]==2){
            rep2=1;
        }
    }

    if(rep3&&rep2){
        printf("Full\n");
        puntajes[FUL] = PFUL;
        return 1;
    }
    return 0;
}

int poker(int puntajes[], int apariciones[]){
    for(int i=0;i<5;i++){
        if(apariciones[i]==4){
            printf("Poker\n");
            puntajes[POK] = PPOK;
            return 1;
        }
    }
    return 0;
}

int generala(int puntajes[], int apariciones[]){
    for(int i=0;i<5;i++){
        if(apariciones[i]==5){
            printf("Generala\n");
            puntajes[GEN] = PGEN;
            return 1;
        }
    }
    return 0;
}