//uso de una clase abstracta para hacer uso de una definicion en comun para cada operacion abriendo la posibilidad de
//ampliar el programa
class Operation : public GetNumber
{
public:
  virtual float DoOperation(float Number1, float Number2) = 0;
};
//clase para realziar la sumaa usando polimorfimso y segrafacion de interfaces
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
