#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
    int i, *punteroVector;
    int vt[N];

    punteroVector = vt;

    srand(time(NULL));
    for(i = 0;i<N; i++){
        *(punteroVector + i)=1+rand()%100;
        printf("%d ", *(punteroVector + i));
    }

    return 0;
}