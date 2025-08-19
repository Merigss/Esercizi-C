/**
 * Scrivere un programma C che acquisisca da tastiera una successione di interi che
termina con il primo intero immesso n maggiore o uguale a 2 e minore o uguale a 10. Successivamente
 riempia una sequenza di 100 interi pseudo-casuali compresi tra 20 e 200 (estremi inclusi)
ed infine per ciascun intero della sequenza visualizzi il più grande multiplo di n inferiore all’intero.
Per svolgere questo compito si definisca ed utilizzi una funzione che produca il più grande multiplo
di un dato intero inferiore ad un secondo dato intero.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VOLTE 10;
#define MAX 200;
#define MIN 20;  

int multiplo(int num, int inf){//funzione per trovare il piu grande multiplo di num inferiore ad inf
    int multiplo=0, n=1;
    while(multiplo<inf){
        multiplo= num*n;
    }
    n--;
    multiplo = num*n;
    return multiplo;
}

int main(void){
    srand(time(NULL));

    int num,nRandom;

    do{
      printf("Inserisci un numero\n");  
      scanf("%d",&num);  
    }while(num<2 || num>10);

    for(int i=0;i<10;i++){
        nRandom=(rand()%(20-10+1))+10;
        printf("Il numero random corrisponde a: %d\n",nRandom);
        printf("Il piu grande multiplo di %d inferiore a %d corrisponde a %d",num,nRandom,multiplo(num,nRandom));

    }

} 
