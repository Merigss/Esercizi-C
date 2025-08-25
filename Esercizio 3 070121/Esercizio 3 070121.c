/*Scrivere un programma C che riempia una tabella di 20 righe e 20 colonne con
interi pseudo-casuali compresi tra 2 e 100 (estremi inclusi); successivamente riempia una sequenza
di modo che, per ciascuna riga i della tabella, la i-esima variabile della sequenza sia uguale alla
quantità di “picchi” presenti sulla riga i. Un picco si verifica in una sequenza quando un elemento
della sequenza è superiore rispetto al precedente ed al successivo elemento; il primo elemento e
l’ultimo elemento della sequenza non sono picchi. Per svolgere questo compito definire ed utilizzare
una funzione che produce il numero di picchi presenti in un dato vettore di n variabili intere.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMR 20
#define DIMC 20

int picchi(int vet[], int dim){
    int picchi=0;
    for(int i=1;i<dim-1;i++){
        if(vet[i]>vet[i-1]&&vet[i]>vet[i+1]){
            picchi++;
        }
    }
    return picchi;
}

int main (void){
    int mat[DIMR][DIMC],vetpicchi[DIMR];

    for(int i=0;i<DIMR;i++){
        for(int j=0; j<DIMC;j++){
            mat[i][j]=rand()%(99)+2;
            printf("%3d",mat[i][j]);
            
        }
    printf("\n");   
    vetpicchi[i]=picchi(mat[i],DIMR); 
    }

    for(int i=0;i<DIMR;i++){
        printf("%d",vetpicchi[i]);
    }

}