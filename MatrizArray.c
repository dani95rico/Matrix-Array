/*
 * MatrizArray.c
 *
 *  Created on: 17/10/2014
 *      Author: dani95rico
 */
#include <stdio.h>
#define Tfilas 3                  /*TamaÃ±o filas*/
#define Tcol 4                    /*TamaÃ±o columnas*/

int main(void)
{
	int matriz [Tfilas] [Tcol];  /*Matriz de 3 filas y 4 columnas*/
	int suma[Tcol];
	int i;                       /*Recorrer filas*/
	int j;                       /*Recorrer columnas*/
	int max;                     /*Maximo del array suma*/
	/*Rellenar la matriz*/
	printf("Tecle los valores de la matriz: ");
	fflush(stdout);

	for(i=0;i<Tfilas;i++)
		for(j=0;j<Tcol;j++)
		{
			printf("Valor (%d,%d): ",i,j);
			fflush(stdout);
			scanf("%d",&matriz[i][j]);
			fflush(stdin);
		}

	/*Sumar columnas*/
	for(j=0;j<Tcol;j++)               /*Lee las columnas una a una*/
	{
		suma[j]=0;
		for(i=0;i<Tfilas;i++)        /*Por cada columna leida lee las filas de esa columna*/
			suma[j]=suma[j]+matriz[i][j];  /*Suma de los valores de cada columna*/
	}

	/*Maximo del array suma*/
	max=suma[0];
	for(j=1;j<Tcol;j++)
	{
		if(suma[j]>max)
		{
			max=suma[j];
		}
	}

	/*Imprimir la martriz por pantalla*/
	for(i=0;i<Tfilas;i++)
	{
		for(j=0;j<Tcol;j++)
			printf("%d\t",matriz[i][j]);
			fflush(stdout);
			printf("\n");
			fflush(stdout);
	}

	/*Imprimir los resultados por pantalla*/
	printf("La suma de las columnas es\n");
	fflush(stdout);
	for(j=0;j<Tcol;j++)
	{
		printf("%4d\t",suma[j]);
		fflush(stdout);
	}

	/*Imprimir el maximo por pantalla*/
	printf("El maximo es: %d\n",max);
	fflush(stdout);

return 0;
}
