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
printf("2\n");
printf("y = mx +- b\n\n");
printf("introduce valor de m::");
scanf("%f",&m);
printf("introduce valor de x::");
scanf("%f",&x);
printf("introduce valor de b::");
scanf("%f",&b);
D=b*b-(4*m*b);
/**
brief se declara un if para determinar si la condicion se cumple
param se declara la letra de para que si se cumple se debuelva un valor 0 y termine la ejecucion
param declaramos la funcion si 2*m cumple la regla terminara 
*/
if (D==0)
printf("sol:%.2f\n",-b/(2*m));
/**
brief declaramos un else if si  no se cumple la funcion anterior se pasara a buscar una solucion en else if
param se declaran en los dos printf el sqrt una funcion de la libreria math.h
*/
else if(D>0){
printf("sol: 1:%.2f\n",(-b+sqrt(D))/(2*m));
printf("sol: 2:%.2f\n",(-b-sqrt(D))/(2*m));
}
/**
brief declaramos else como ultimo recurso para ver si encuentra solucion al problema
param se declaran los prinf como la anterior solo aqui se pide un valor mas ,-b/(2*m)
return  retorna un valor 0 para terminar con el programa
*/
else{
printf("sol: 1:%.2f+%.2f\n",-b/(2*m),(sqrt(-D))/(2*m));
printf("sol: 1:%.2f-%.2f\n",-b/(2*m),(sqrt(-D))/(2*m));
}


return 0;
}
