#include "ic_0301_04_10_2020_Juan_diego_mateos_alvarado_simplex.h"
/**
@brief declaramos un valor de tipo entero llamado leer datos 
@param esto nos dara un valor entero llamado var 
@param declaramos los  valores de tipo entero rest, c, i que seran donde guardaremos los datos que pida el programa
@param mandamos a llamar la funcion que se optimizara esta la ingresara el usuario
*/
int leeDatos(int *var){
int rest,c,i;

	
		
	printf(" Funcion a Optimizar \n\n\nNumero de Variables: ");
	scanf("%d",var);
	
	printf("\ntoma en cuenta que: c1.X1+c2.X2+...cn.Xn = b \n\n");
	/**
	@param tomamos en cuenta la formula del metodo simplex 
        @param declaramos un for para que realize la  operacion
	@param c es la funcion 
	@param rest el numero de restricciones 
	@param i es el termino independiente 
	@paramestos datos se le piden a el usuario y se guardan en rest,c,i y var que serviran para sacar las matrizes
	@return esto nos retornara un rest
	*/
	for(c=0;c<*var;c++)
	{
		
		printf(" c%d: ", c+1);
		scanf("%lf",&funcion[c]);
		fflush(stdin);
		
		}
		
	
		printf("\n  numero de Restricciones: ");
		scanf("%d",&rest);
		
		fflush(stdin);
		
		for(i=0;i<rest;i++)
		{
			
			printf("Restriccion %d\n",i+1);
			for(c=0;c<*var;c++)
			{
				
				printf(" c%d: ",c+1);
				scanf("%lf",&restricciones[i][c]);
				fflush(stdin);
			}
			printf("Termino independiente ");
			scanf("%lf", &independiente[i]);
			fflush(stdin);
			}
			
			return rest;
			
	}
