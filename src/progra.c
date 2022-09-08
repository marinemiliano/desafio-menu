/*
 * progra.c
 *
 *  Created on: 8 sep. 2022
 *      Author: marin
 */

#include <stdio.h>
#include <stdlib.h>


int menu()
{
	int retorno;
	int opcion;
	printf("\n1 iniciar \n");
	printf("\n2 procesar \n");
	printf("\n3 finalizar\n");
	printf("\n4 salir \n");
	printf("\ningrese opcion");
	scanf("%d",&opcion);

	return opcion;
}

int IngresarOperando()
{
	int retorno;
	int operando;

	printf("ingrese operando");
	scanf("%d",&operando);

	return operando;
}
