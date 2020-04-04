#include <iostream>

using namespace std;

int main() {

   int numero, num_um, num_dois,num_cinco;

   cout << "Entre com um de valor de 0 a 1.000.000.";
   cin >> numero;

    if ( numero >= 1 ){
        if ( numero >= 2){
                if ( numero >=5 ){
                    num_cinco = numero/5;
                    numero = numero - num_cinco*5;
                    num_dois = numero/2;
                    numero = numero - num_dois*2;
                    num_um = numero/1;
                } else {
                    num_dois = numero/2;
                    numero = numero - num_dois*2;
                    num_um = numero/1;
                }
        } else {
            num_um = numero/1;
        }
    } else {
        cout << "zero reais";
    }


    cout << "Numero de notas de 1: " << num_um << endl;
    cout << "Numero de notas de 2: " << num_dois << endl;
    cout << "Numero de notas de 5: " << num_cinco << endl;

    return 0;
}
