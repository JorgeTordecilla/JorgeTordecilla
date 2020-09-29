// Solid.cpp, programa principal que muestra la implementacion de los principios solid

/*
Programa que realzia las operaciones matematicas basicas con dos numeros ingresados por el usuario
*/

//Dependencias
#include <iostream>
using namespace std;

//Llamada a archivos del programa
#include "GetUserNumber.cpp"
#include "Operations.cpp"


int main()
{
  //creacion de objeto de la clase GetNumber y aceder al metodo para guardar los datos esta clase se puede modificar sin afectar las demas
  GetNumber UserNumber;
  UserNumber.Numbers();

  //Creacion de los objetos de las clases que realizan las operaciones
  Sum add;
  Subtraction Subtrac;
  Multiplication Multip;
  Division Divi;

  //Saldia por pantalla de cada una de las operaciones
  cout << "Total Sum "<<add.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;
  cout << "Total Subtraction  "<<Subtrac.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;
  cout << "Total Multiplication "<<Multip.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;
  cout << "Total Division "<<Divi.DoOperation(UserNumber.Number1,UserNumber.Number2)<< endl;

  return 0;
}
