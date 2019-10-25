#include <iostream>


using std::cout;
using std::endl;


GradeBook::GradeBook(string name){
    setName(name);
}

void GradeBook::setName( string name ){
            nomeCurso = name;
}

string GradeBook::getName(){
    return nomeCurso;
}

void GradeBook::displayMessage(){
    cout << "O nome do curso é: " << nomeCurso;
}


