# Equipo1
#include <iostream>
using namespace std;

int main(){
  int opcion;
  float a,b,suma.resta.multiplicacion.division.raiz;
  cout<<"CALCULADORA"<<endl;
  cout<<"1. Suma"<<endl;
  cout<<"2. Resta"<<endl;
  cout<<"3. Multiplicacion"<<endl;
  cout<<"4. Division"<<endl;
  cout<<"5. Raiz"<<endl;
  cout<<"Ingrese el numero de opcion:";
cin>>opcion
  
if(opcion == 1){
  cout<<"Ingrese el primero numero a sumar:"<<endl;
  cin>>a;
  cout<<"Ingrese el segundo numero a sumar:"<<endl;
  cin>>b;
  suma = a + b;
  cout<<"La suma es: "<<endl<<suma;
  }
  
  if(opcion == 2){
  cout<<"Ingrese el primero numero a restar:"<<endl;
  cin>>a;
  cout<<"Ingrese el segundo numero a restar:"<<endl;
  cin>>b;
  resta = a - b;
  cout<<"La resta es: "<<endl<<resta;
  }
  
  if(opcion == 3){
  cout<<"Ingrese el primero numero a multiplicar:"<<endl;
  cin>>a;
  cout<<"Ingrese el segundo numero a multiplicar:"<<endl;
  cin>>b;
  multiplicacion = a * b;
  cout<<"La multiplicacion es: "<<endl<<multiplicacion;
  }
  
  if(opcion == 4){
  cout<<"Ingrese el primero numero a dividir:"<<endl;
  cin>>a;
  cout<<"Ingrese el segundo numero a dividir:"<<endl;
  cin>>b;
  division = a / b;
  cout<<"La division es: "<<endl<<division;
  }
  
  if(opcion == 5){
  cout<<"Ingrese el numero para sacar la raiz:"<<endl;
  cin>>a;
  cout<<"La raiz es: "<<endl<<raiz;
  }
return 0;
}
