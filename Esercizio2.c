#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    srand(time(NULL))
    int num, volte=0, x;

    do{
        printf("Inserisci un numero\n");
        scanf("%d",&num);

    }while(num<0 || num >=20)


    for(int i=0; i<100; i++){
        x=(rand()%(20-1+1))+1;
        printf("Il numero random è: %d\n",x);
        if(x==num){
            volte++;
        }

    }

    printf("Il numero di volte che %d compare nella sequenza di numeri casuali è %d",num,volte);

    return 0;
}