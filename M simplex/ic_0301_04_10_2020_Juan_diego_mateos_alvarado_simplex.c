#include "ic_0301_04_10_2020_Juan_diego_mateos_alvarado_simplex.h"


int main(void)                                                                         //J0K�R (DIEGO)
			{
			
				int rest, var, ni ;
				int i,j, k, columna, renglon, count, cuenta;
				double maximo = 0, menor, aux, mult, temp;
				rest = leeDatos(&var);
			
			//Creatabla inicial simplex:
			for(i=0;i<rest;i++)
			for(j=0; j<rest; j++)
			if (i == j)
			restricciones[i][var+j]=1;
			else
			restricciones[i][var+j]=0;
			for(i=0; i<rest;i++)
			restricciones[i][var+rest] = independiente[i];
			                                                                                   
			for(j=0; j<var; j++)
			restricciones[rest][j] = funcion[j] * -1;
			for(j=var; j<rest+var; j++)
			restricciones[rest][j] = 0;
			
			ni=1;
			printf("\n-----------------------------------------------");
			printf("\n ITERACION %d",ni);
			printf("\n-----------------------------------------------\n");
			ni++;
			for(i=0; i<=rest; i++) {
			for(j=0; j<=rest+var; j++)
			printf(" %.2lf \t", restricciones[i][j]);
			printf("\n");
			}
			
			//Encontrar la variable de decision que entra a la base
			//y la de holgura que saldra de la base
			
			do
			{
				//Encontrar la variable de decision que entrara a la base
				maximo = abs(restricciones[rest][0]);
				columna = 0;
				for(j=0; j<=rest+var; j++)
			{
			if( restricciones[rest][j] < 0 )
			{
				temp = -1 * restricciones[rest][j];
				if ( maximo < temp)
			{
				maximo = temp;
				columna = j;
			}
			}
			else
			continue;
			}
			
			count = 0;
			aux = 1e20;
			menor = 1e20;
			for(i=0; i<rest; i++) {
			
				if(restricciones[i][columna] > 0)
				aux = restricciones[i][rest+var] / restricciones[i][columna];
				else
				count++;
				if( menor > aux ) {
				menor = aux;
				renglon = i;
			}
			}
			if(count == rest) {
				printf("Soluci� no acotada");
				exit(1);
			}
			printf("\nPivote: %.2lf, renglon %d columna %d",restricciones[renglon][columna], renglon, columna);
			
			//Encontrar los
			// coeficientes de la nueva tabla
			aux = restricciones[renglon][columna];
			for(j=0; j<=(rest+var); j++)
			restricciones[renglon][j] = restricciones[renglon][j] / aux;
			
			
			for(i=0; i<=rest; i++) {
				if (i == renglon )
				continue;
			else {
				aux = restricciones[i][columna] * -1;
				for(k=0; k <= rest+var; k++) {
				restricciones[i][k] = (aux * restricciones[renglon][k]) +
				restricciones[i][k];	
			}
			}
			
			}
			printf("\n-----------------------------------------------");
			printf("\n Iteraccion %d",ni);
			printf("\n-----------------------------------------------\n");
			ni++;
			for(i=0; i<=rest; i++) {
				for(j=0; j<=rest+var; j++)
				printf(" %.2lf \t", restricciones[i][j]);
				printf("\n");
			}
			cuenta = 0;
			for(j=0;j<rest+var;j++)
			if(restricciones[rest][j] >= 0)
			cuenta++;
			if (cuenta == rest+var)
			break;
			} while(cuenta);
			
			printf("---->");
			
			getch();
			}