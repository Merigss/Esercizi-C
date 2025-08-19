/*Scrivere un programma C (funzione main) che visualizza la somma degli interi
presenti in una successione di interi pseudo-casuali tale per cui il primo intero della successione è
1, ogni intero della successione è superiore al precedente di almeno 10 unità e di al più 20 unità,
e l’ultimo intero della successione è superiore al precedente di esattamente 15 unità. Per svolgere
questo compito si definisca esclusivamente la funzione principale main.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * L'esercizio ci fa intendere che la quantità
 *  di numeri è varibile quando il passo è di 15 unita il ciclo termina
 */
int main(void){
    srand(time(NULL));
    int num=1, passo, somma=0;

    do{
        printf("Il numero corrisponde a: %d\n",num);//stampa il numero 
        somma = somma+num;//aggiunge alla somma totale il numero corrente
        passo=(rand()%(20-10+1))+10;//genera il passo casuale tra 10 e 20
        printf("Il passo corrisponde a: %d\n",passo);//stampa il passo
        num+=passo;//genera il numero successivo aggiungendo il passo

    }while(passo!=15);//fa un controllo sul passo se il passo è 15 è il numero finale quindi termina il ciclo

    printf("La somma della sequenza corrisponde a %d",somma);//stampa la somma

    return 0;
}