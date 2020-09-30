  //ejemplo de solución sin usar los principios de SOLID
#include<iostream>

 using namespace std;

//Clase que realiza el ingreso de datos y las operaciones
 class operaciones
 {
 public:
   float Number1, Number2;
   //Función para el ingreso de datos
   void datos()
   {
     cout<<"Numero 1: ";
     cin>>Number1;
     cout<<"Numero 2: ";
     cin>>Number2;
   }
   //Método de suma
   void suma(){
     cout<<"\nSuma Total = "<<(Number1+Number2)<<endl;
   }
   //Método de resta
   void Resta(){
     cout<<"Resta Total = "<<(Number1-Number2)<<endl;
   }
   //Método de Multiplicación
   void Multiplicacion(){
     cout<<"Multiplicacion Total = "<<(Number1*Number2)<<endl;
   }
      //Método de división
   void Division(){
     if(Number2!=0){
       cout<<"Division Total = "<<(Number1/Number2)<<endl;
     }
     else{
       cout<<"Division Total = "<<(Number2/Number1)<<endl;
     }
   }
 };

 int main() {
    //Creación de objeto de la clase
   operaciones op;
   //Acceso a métodos
   op.datos();
   op.suma();
   op.Resta();
   op.Multiplicacion();
   op.Division();
   return 0;
 }
