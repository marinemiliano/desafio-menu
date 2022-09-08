/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Desafío: Menú-Funciones y Bibliotecas

Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "progra.h"

int menu();
int IngresarOperando();

int main(void)
{
	setbuf(stdout,NULL);
	int ret;
	int operando;
	int flag;
	flag=0;

	do
	{
		ret=menu();

		switch(ret)
		{
			case 1:
				printf("ha ingresado a iniciar\n");
				if(flag==0)
				{
					operando=IngresarOperando();
					flag=1;
					printf("el operando es %d",operando);
				}
			break;

			case 2:
					printf("ha ingresado a procesar\n");
				 if(flag==0)
				 {
					 printf("Debe Iniciar antes de Procesar\n");
				 }
				 else
				 {

				 }
			break;

			case 3:
					printf("ha ingresado a finalizar\n");
					if(flag==0)
					{
						printf("Debe Iniciar antes de Finalizar\n");
					}
			break;

			case 4:


			break;

			default:
				  printf("error coloque numero de 1 a 4");
			break;
		}

	}
	while(ret!=4);

	return EXIT_SUCCESS;
}

