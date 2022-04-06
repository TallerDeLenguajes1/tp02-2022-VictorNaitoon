#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 5

struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};
typedef struct compu pc;

void presentarPC(pc *computadora);
void pcMasVieja(pc *computadora);
void pcMasRapida(pc *computadora);

int main(){

    srand(time(NULL));

    pc Computador[N];

    char tipos[6][10] = {"Intel","AMD","Celeron","Athlon","Core","Pentium"};

    for (int i = 0; i < M; i++){
        Computador[i].velocidad= 1 + rand()%3;
        Computador[i].anio= rand()%(2022+1-2015)+2015;
        Computador[i].tipo_cpu=tipos[rand()%6][0];
        Computador[i].cantidad= 1+rand()%9;
    }
    
    presentarPC(Computador);
    pcMasVieja(Computador);
    pcMasRapida(Computador);

    return 0;
}

void presentarPC(pc *computadora){

    for (int i = 0; i < M; i++){
        printf("\n ------ PC %d ------\n",i+1);
        printf("\nVelocidad: %d GHz", computadora[i].velocidad);
        printf("\nAnio: %d",computadora[i].anio);
        printf("\nCantidad: %d",computadora[i].cantidad);
        printf("\nTipo de CPU: %s",computadora[i].tipo_cpu);
    }
    
}

void pcMasVieja(pc *computadora){
    int aux = computadora[0].anio, contador;
    for (int i = 0; i < M; i++){
        if (aux > computadora[i].anio){
            aux=computadora[i].anio;
            contador = i+1;
        }
    }
    printf("la computadora mas vieja es la numero %d del anio %d \n",contador, aux);
}

void pcMasRapida(pc *computadora){
    int contador;
    int aux = computadora[0].velocidad;
    for (int i = 0; i < M; i++){
        if (aux <= computadora[i].velocidad){
            contador=i+1;
            aux =  computadora[i].velocidad;
        }
    }
    printf("La computadora mas rapida es la numero %d con una velocidad de: %d GHz\n",contador, aux);
}