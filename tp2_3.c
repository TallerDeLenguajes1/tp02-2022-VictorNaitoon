#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main(){

    int i,j, *punteroMatriz;
    int mt[N][M];

    punteroMatriz = &mt[0][0];

    for(i = 0;i<N; i++){
        for(j = 0;j<M; j++){
            *(punteroMatriz+(i+M + j))=1+rand()%100;
            printf("%d ", *(punteroMatriz+(i+M + j)));
        }
        printf("\n");
    }

    return 0;
}

