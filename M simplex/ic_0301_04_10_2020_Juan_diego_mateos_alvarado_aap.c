#include "ic_0301_04_10_2020_Juan_diego_mateos_alvarado_simplex.h"

int leeDatos(int *var){
int rest,c,i;

	
		
	printf(" Funcion a Optimizar \n\n\nNumero de Variables: ");
	scanf("%d",var);
	
	printf("\ntoma en cuenta que: c1.X1+c2.X2+...cn.Xn = b \n\n");
	
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
