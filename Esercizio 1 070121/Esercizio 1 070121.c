/*
 Scrivere un programma C (funzione main) che acquisisca da tastiera una successione
di numeri naturali che termina la terza volta che un naturale dispari è preceduto da un naturale
pari nella sequenza; successivamente visualizzi la somma complessiva delle tre coppie di naturali
della sequenza tale per cui il primo naturale della coppia è pari ed il secondo naturale della coppia
è dispari. Per svolgere questo compito si definisca esclusivamente la funzione principale main.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main(void){

    int numprec,numcorr,volte=0, somma=0;

    do{
       printf("Inserisci un numero\n");//stampa per inserire un numero
       scanf("%d",&numcorr); //acquisisce un numero e lo assegna a numcorr
       if(numprec%2==0 && numcorr%2!=0){//controlla la coppia corrente e se rispetta le condizioni aumenta volte di 1
        volte++;
        somma += numcorr;
        somma += numprec;//se la coppia è valida viene aggiunta alla somma da stampare alla fine
       } 
       numprec=numcorr;//passo cruciale fa diventare il numero corrente il numero precedente per l'iterazione successiva
    }while(volte<3);//quando ci sono 3 coppie il ciclo termina

    printf("La somma delle coppie valide corrisponde a %d", somma);//stampa la somma delle 3 coppie valide



    return 0;
 }