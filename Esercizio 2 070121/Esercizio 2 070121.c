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
    int multiplo=0, n=1;//inizializzazione delle variabili
    while(multiplo<inf){//condiizone di permanenza del ciclo
        multiplo= num*n;//trova il multiplo del numero 
        n++;            //aumenta n di uno
    }
    n-=2;       //diminuisco n di 2 sennò il multiplo risulta piu alto del limite
    multiplo = num*n; //calcolo il multiplo
    return multiplo; //restituisco il multiplo
}

int main(void){
    srand(time(NULL));

    int num,nRandom;

    do{
      printf("Inserisci un numero\n"); //ciclo che termina quando 
      scanf("%d",&num);               // l'utente inserisce un numero >= 2 oppure <= 10   
    }while(num<2 || num>10);            

    for(int i=0;i<10;i++){
        nRandom=(rand()%(200-10+1))+10;//genero il numero random tra 10 e 200
        printf("Il numero random corrisponde a: %d\n",nRandom);//lo stampo
        printf("Il piu grande multiplo di %d inferiore a %d corrisponde a %d\n",num,nRandom,multiplo(num,nRandom));//utilizzo la funzione
        //per trovare il piu grande multiplo di n(numero inserito dall'utente) inferiore a nRandom(numero generato tra 10 e 200)

    }

} 
