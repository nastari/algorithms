#include <iostream>

using namespace std;

 // Programa que coloca em ordem de grandeza qualquer sequência de números independentemente do tamanho do vetor.

int main (){


 int numbers[] = {10,20,30,45,70,35,80,210,100}; // Sequencia aleatória. // Insira quantos e quaisquer valores entre virgulas.
 int iteracoes = -1 ;       // Variável != 0 caso contrário o loop nem inicia.
 int sizeVector;
 int i;

 sizeVector = sizeof(numbers) / 4; // tamanho do vetor

  //Bubble Sort
 
     while ( iteracoes != 0 ){

        int aux;
        iteracoes = 0;


            for ( i = 0 ; i < sizeVector ;){
                    if ( numbers[i] > numbers[i+1] ){

                        aux = numbers[i];

                        numbers[i] = numbers[i+1];          // Troca de valores entre pares.

                        numbers[i+1] = aux;

                        i++;

                        iteracoes++;
                    } else {

                        i++;

                    }
           }

     sizeVector--; // Dica de Desempenho
                   // A cada passagem do 'FOR', o valor "MAIS PESADO" avança para direita e inutiliza
                   // a passagem da análise por todo o vetor, então decrescenta-se um conforme os maiores
                   // valores vão se alocando a direita.

     }

    sizeVector = sizeof(numbers) / 4;  //sizeVector precisa ser redeclarado pois sofreu alteração no algoritmo que põe em ordem.
 
    for ( i = 0; i < sizeVector ; i++ ){    
        cout << numbers[i] << " ";   //Impressão dos valores em ordem.
    }

    return 0;
}

