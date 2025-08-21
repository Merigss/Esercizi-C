/*
 * Scrivere un programma C che visualizzi la quantità di divisori di 10 numeri naturali 
 * acquisiti da tastiera. 
 * Per svolgere questo compito si definisca e utilizzi una funzione che produca la quantità di divisori 
 * di un dato intero
 */

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

int divisori(int num){//questa funzione ritorna il numero di divisori di un intero
    int div, count=1;//inizializzo count a 1 perchè un numero è sempre divisibile per 1
    div = num;//div assume il valore di num cosi che parto a dividere per se stesso

    while(div>1){//finche il numero per cui divido num è maggiore di 1 vado avanti a cercare divisori
        if(num%div==0){//un numero è divisore quando la divisione tra dividendo e divisore produce resto 0
           count++; //se è vero aumento i divisori di 1
        }
        div--;//cerco un altro divisore diminuendo il divisore stesso di 1
    }

    return count;
}

int main (void){
    for(int i=0;i<DIM;i++){//questo ciclo viene eseguito DIM volte
        int num;
        printf("Scrivi un numero e ti dico quanti divisori ha..\n");
        scanf("%d",&num);
        printf("Il numeri di divisori di %d corrisponde a %d\n",num,divisori(num));//il numero divisori(num) sarà il numero che la funzione divisori ritorna
    }
    return 0;
}