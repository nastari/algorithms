#include <iostream>

using std::cout;
using std::endl;
using std::cin;

using std:: getline;

#include "classGradeBook.h"


int main(){

string nome_curso;

cout << "Entre com o nome do Curso.\n";

getline( cin , nome_curso );

GradeBook gradeBook1( nome_curso );

gradeBook1.displayMessage();

gradeBook1.Registro();

gradeBook1.getMedia();


    return 0;

}
