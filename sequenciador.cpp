#include <iostream>

using namespace std;


int main (){


 int numbers[] = {10,20,30,45,70,35,80,210,100}; // RANDOM CHOICE
 int iteracoes = -1 ;       // VARIAVEL != 0 CASO CONTR�RIO LOOP NEM INICIA.
 int sizeVector;
 int i;

 sizeVector = sizeof(numbers) / 4; // tamanho do vetor

 // ORDENAR POR BUBBLE

     while ( iteracoes != 0 ){

        int aux;
        iteracoes = 0;


            for ( i = 0 ; i < sizeVector ;){
                    if ( numbers[i] > numbers[i+1] ){

                        aux = numbers[i];

                        numbers[i] = numbers[i+1];          // TROCA DE VALOR ENTRE OS PARES

                        numbers[i+1] = aux;

                        i++;

                        iteracoes++;
                    } else {

                        i++;

                    }
           }

       sizeVector--;   // TODA VEZ QUE O FOR � EXECUTADO, O N�MERO "MAIS PESADO" CAI PARA DIREITA E 'DESNECESSARIZA' A PASSAGEM DA AN�LISE POR 'tam' menos um.

     }

    sizeVector = sizeof(numbers) / 4;
    for ( i = 0; i < sizeVector ; i++ ){
        cout << numbers[i] << " ";
    }

    return 0;
}

