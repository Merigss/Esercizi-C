/**
 * Scrivere un programma C che acquisisca da tastiera 50 
 * numeri naturali e successivamente visualizzi la quantità totale
 *  di cifre che costituiscono i numeri acquisiti. Per svolgere
    questo compito si definisca ed utilizzi una funzione che 
    produca il numero di cifre che costituiscono
    un dato intero.
 */

#include <stdio.h>
#include <stdlib.h>

#define DIM 50

int cifre(int num){//questa funzione ritorna il numero di cifre di cui un numero è composto
    int cifre=0;

    if(num==0){
        return 1;//se il numero è 0 ovviamente è composto da 1 cifra
    }

    while(num>0){
        num=num/10;//ogni volta che il ciclo viene eseguito divido il numero per 10
                   //quindi diminuisco  il numero di una cifra fino a quando è 0
        cifre++;
    }
    return cifre;

}

int main(void){

    for(int i=0;i<DIM;i++){
        int num;
        printf("Inserisci un numero e ti mostrero quante cifre ha..\n");
        scanf("%d",&num);
        printf("Il numero %d ha %d cifre\n",num,cifre(num));

    }

    return 0;
}