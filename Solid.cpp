// Solid.cpp, programa principal que muestra la implementación de los principios SOLID

/*
Programa que realiza las operaciones matemáticas básicas con dos números ingresados por el usuario
*/

//Dependencias
#include <iostream>
using namespace std;

//Llamada a archivos del programa
#include "GetUserNumber.cpp"
#include "Operations.cpp"


int main()
{
  //Creación de objeto de la clase GetNumber y acceder al método para guardar los datos esta clase se puede modificar sin afectar las demás.
  GetNumber UserNumber;
  UserNumber.Numbers();

  //Creación de los objetos de las clases que realizan las operaciones
  Sum add;
  Subtraction Subtrac;
  Multiplication Multip;
  Division Divi;

  //Salida por pantalla de cada una de las operaciones
  cout << "Total Sum "<<add.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;
  cout << "Total Subtraction  "<<Subtrac.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;
  cout << "Total Multiplication "<<Multip.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;
  cout << "Total Division "<<Divi.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;

  return 0;
}
