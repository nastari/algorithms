#include <iostream>
#include <string>
using std:: cout;
using std:: string;
using std:: fixed;

#include <iomanip>
using std::setprecision;



class GradeBook{

public:

    GradeBook( string name ){
    setName(name);
    }

    void setName ( string name ){
    courseName = name;
    }

    string getName(){
    return courseName;
    }

    void displayMessage(){
    cout << "\n\n Bem-Vindo ao Curso:" << courseName << "\n\n";
    }

    void Registro(){

            double nota;

            cout << "Insira a nota do aluno ou -1 para sair ";
            cin >> nota;

            while ( nota != -1 ){

              Media( nota );

              cout << "Insira a nota do aluno ou -1 para sair ";

              cin >> nota;

            }

    }


    void Media( double nota ){


        i++;

        soma = soma + nota ;

        media = soma / i ;

    }

    void getMedia (){
        cout << "A média das notas é: " << media;
    }




private:

    double soma;
    int i = 0;
    double media;
    string courseName;

};
