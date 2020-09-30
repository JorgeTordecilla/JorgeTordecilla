/*Uso de una clase abstracta para hacer uso de una definición en
común para cada operación abriendo la posibilidad de ampliar el programa*/
class Operation : public GetNumber
{
public:
  virtual float DoOperation(float Number1, float Number2) = 0;
};
//Clase para realizar la suma usando polimorfismo y segregación de interfaces
class Sum : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    return (Number1 + Number2);
  }
};
class Subtraction : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    return (Number1 - Number2);
  }
};

class Multiplication : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    return (Number1 * Number2);
  }
};

class Division : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    if (Number2!=0) return (Number1 / Number2);
    else return (Number2 / Number1);
  }
};
