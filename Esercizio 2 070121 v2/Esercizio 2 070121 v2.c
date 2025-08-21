/*Scrivere un programma C che acquisisca da tastiera 20 numeri naturali in base 10
e successivamente visualizzi la quantità totale di cifre che costituiscono le codifiche in base 2 dei 
numeri acquisiti. Per svolgere questo compito si definisca ed utilizzi una funzione che produca il
numero di cifre che costituiscono la codifica binaria di un dato intero in base 10
*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 3

int codifica (int num){//funzione che restituisce il numero di cifre binarie di un numero intero
    
    int cifre=0;//inizializzo cifre a 0

    if(num==0){
        return 1; //se il numero è zero ha solo una cifra in codice binario
    }

    while(num>0){
        cifre++;
        num=num/2; //ogni volta che divido per due conto una cifra binaria
    }
    return cifre
}

int main (void){

    int num;

    for(int i=0;i<DIM;i++){
        printf("Inserisci un numero naturale: ");
        scanf("%d",&num);//ogni volta che il ciclo for viene eseguito viene passato nella funzione codifica un numero diverso
        printf("\nLa quantita di cifre binarie del numero: %d corrisponde a: %d\n",num,codifica(num));
    }
}