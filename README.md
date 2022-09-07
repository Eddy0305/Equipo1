# Equipo1

#include <math.h>

Raíz(){
  float dato, raiz;
  cout << "Número del cual necesita la raiz cuadrada:"; 
  cin >> dato;
  raiz = sqrt(dato);
  cout << "La raiz cuadrada de " << dato << " es " << raiz << endl; 
  return 0; 
}
