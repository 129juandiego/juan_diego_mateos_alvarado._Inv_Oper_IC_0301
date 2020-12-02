#include "ic_0301_25_11_2020_juan_diego_mateos_alvarado_ecuacion.h"
#include<stdio.h>
#include<math.h>



/**
@param se declaran las variables como float,son numeros que ingresaran en decimales
@param se pide cada uno de los datos con el scanf para cada valor declarado

*/

int main(){

float y,m,x,b,D;
printf("ecuaciones lineales\n");
printf("[-5,5]\n");
printf("y = mx +- b\n\n");
printf("introduce valor de m::");//param pide el valor que se le dara a m
scanf("%f",&m);  //param solicita el dato de la variable m con un valor flotante
printf("introduce valor de x::");//param pide el valor que se le dara a x
scanf("%f",&x);//param solicita datos para guardar la variable x
printf("introduce valor de b::");//param pide el valor que se le dara a b
scanf("%f",&b);//param nos pide el valor flotante para b
D=b*b-(4*m*b);
