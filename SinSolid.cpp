//ejemplo de solucion sin usar los principos de SOLID
#include<iostream>

 using namespace std;

//CLASE QUE REALIZA EL INGRESO DE DATOS Y LAS OPERACIONES
 class operaciones
 {
 public:
   float Number1, Number2;
   //funcion para el ingreso de datoos
   void datos()
   {
     cout<<"Numero 1: ";
     cin>>Number1;
     cout<<"Numero 2: ";
     cin>>Number2;
   }
   //Metodo de suma
   void suma(){
     cout<<"\nSuma Total = "<<(Number1+Number2)<<endl;
   }
   //Metodo de resta
   void Resta(){
     cout<<"Resta Total = "<<(Number1-Number2)<<endl;
   }
   //Metodo de Multiplicacion
   void Multiplicacion(){
     cout<<"Multiplicacion Total = "<<(Number1*Number2)<<endl;
   }
      //Metodo de division
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
    ///creacion de objeto de la clase
   operaciones op;
   //acesso a metodos
   op.datos();
   op.suma();
   op.Resta();
   op.Multiplicacion();
   op.Division();
   return 0;
 }
