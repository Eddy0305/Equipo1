{

int opcion,operador1,operador2;

do
{
  
  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicacion\n");
  printf("4. Division\n");
  printf("5. Raiz\n");
  pritnf("6. Potencia\n");
  printf("7. Salir\n\n");

  scanf("%d",&opcion);


switch(opcion)
{
    case 1:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        //funcion suma
        break;

    case 2:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
       //funcion resta
        break;

    case 3:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        //funcion multiplicacion
        break;

    case 4:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce otro numero: ");
        scanf("%d",&operador2);
        //funcion divisio
        break;
     case 5:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        //funcion raiz
        break;
    case 4:
        printf("Introduce un numero: ");
        scanf("%d",&operador1);
        printf("Introduce la potencia del numero: ");
        scanf("%d",&operador2);
        //funcion potencia
        break;

    case 5:
      break;
    
        
}

}while(!(eleccion==6));

}
