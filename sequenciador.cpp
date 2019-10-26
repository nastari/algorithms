#include <iostream>

using namespace std;

 // algoritmo põe em ordem de grandeza qualquer sequência de números independentemente do tamanho do vetor.

int main (){


 int numbers[] = {10,20,30,45,70,35,80,210,100}; // sequence any // sequencia qualquer
 int iteracoes = -1 ;  // must be different from 0 to enter loop
 int sizeVector;
 int i;

 sizeVector = sizeof(numbers) / 4; // size of vector numbers

  // bubble Sort
 
     while ( iteracoes != 0 ){

        int aux;
        iteracoes = 0;


            for ( i = 0 ; i < sizeVector ;){
                    if ( numbers[i] > numbers[i+1] ){

                        aux = numbers[i];

                        numbers[i] = numbers[i+1];          //  exchange of values between pairs // troca de valores entre pares.

                        numbers[i+1] = aux;

                        i++;

                        iteracoes++;  // There will only be ( 'iterations'! = 0 ) if there is a number to the left larger than the right
                                      // if this condition does not exist, 'iterations' are not appended to 0 and while 'exits'.
                                      // Só haverá ( 'iteracoes' != 0 ) se houver um número a esquerda maior que o da direita
                                      // se essa condição não existe, 'iteracoes' não é acrescida de 0 e while 'sai fora'.
                    } else {

                        i++;

                    }
           }

     sizeVector--; // perfomance tip // dica de Desempenho
                   // at each pass of the 'FOR', the value 'HIGHEST' advances to the right and renders it unusable.
                   // the passage of the analysis throughout the vector, then decreases 'one' as the largest
                   // values are allocated to the right. And in the next 'FOR' pass, it doesn't have to go 'till the end'.
                   // A cada passagem do 'FOR', o valor "MAIS PESADO" avança para direita e inutiliza
                   // a passagem da análise por todo o vetor, então decrescenta-se 'um' conforme os maiores
                   // valores vão se alocando a direita. E na próxima passagem do 'FOR', ele não precisa ir 'até o fim'.

     }

 
    sizeVector = sizeof(numbers) / 4; 
 
    for ( i = 0; i < sizeVector ; i++ ){    
        cout << numbers[i] << " ";   // printing values in order // imprimindo os valores em ordem.
    }

    return 0;
}

