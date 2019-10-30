#include <string>
#include <iostream>

using namespace std;

void bubbleSort( int , int * );

int main(){

    // colocar vetor em ordem crescente

    int tam = 5;

    int lista[tam] = { 5 , 2 , 11 , 45 , 23 };


    // utilizacao de funcao para tal

    bubbleSort( tam , lista );


    for ( int i = 0 ; i < tam ; i++)
        cout << lista[i] << "   ";


}


void bubbleSort( int tam, int* lista ){

    int counter = -1;

    while ( counter != 0 ){
        counter = 0;
        for ( int i = 0 ; i < tam ; i++ ){
            if ( lista[i] > lista[i+1]){
                int aux;
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                counter++;
            }
        }
        tam--;
    }
}
