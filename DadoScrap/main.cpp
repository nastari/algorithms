#include <iostream>
#include <string>
#include <istream>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <time.h>
#include <iomanip>
#include <cstdio>

using namespace std;


int Jogada(){
    int dado1,dado2,soma;
    srand(time(0)*time(0)*time(0));
    dado1 = ( 1 + rand() % 6);
    dado2 = ( 1 + rand() % 6);
    soma = dado1 + dado2;
    cout << "           \n";
    cout << " Soma dos dados : " << dado1 << " + " << dado2 << " = " << soma << endl ;
    cout << "          * * * * * * * * * *\n\n\n\n";

    return soma;

}

int main (){

    register int pontuacao, novaTentativa;
    enum Status { GANHOU , PERDEU , CONTINUA };
    Status GameStatus;

    system("pause");

    pontuacao = Jogada();

    switch ( pontuacao ){

case 7:
case 11:
    GameStatus = GANHOU;
    cout << "           VOCE GANHOU!\n";
    break;
case 2:
case 3:
case 12:
    GameStatus = PERDEU;
    cout << "           VOCE PERDEU!\n";
    break;
default:
    GameStatus = CONTINUA;
    cout << "           VOCE CONTINUA!\n";

        while ( GameStatus == CONTINUA ){

            novaTentativa = Jogada();

                if ( novaTentativa == pontuacao - 1 ){
                    GameStatus = GANHOU;
                    cout << "           VOCE GANHOU!\n";
                } else if ( novaTentativa == 7 ){
                    GameStatus = PERDEU;
                     cout << "          VOCE PERDEU!\n";
                } else {
                    GameStatus = CONTINUA;
                     cout << "          VOCE CONTINUA!\n";
                }


        }
    break;
    }

    return 0;
}

