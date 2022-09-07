#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float suma(float num1, float num2)
{
  float total = 0;
  
  total = num1 + num2;


  return total;
}
float resta(float num1, float num2)
{
  float total = 0;
  
  total = num1 - num2;


  return total;
}
float division (float n, float n2 ){
float div;
return div=(n/d);

  
}


double potencia(float num1, float potencia){
  double resultado = (double)pow(num1, potencia);
  return resultado; 
}

Raíz(){
  double dato, raiz;
  printf("Número del cual necesita la raiz cuadrada:"); 
  scanf ("%f",&dato);
  raiz = sqrt(dato);
  printf("La raiz cuadrada de %f es: %f " , dato, raiz); 
  return 0;
}
