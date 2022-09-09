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
	int flagTwo;
	flagTwo=0;
	flag=0;
	char letra;

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

				printf("desea salir o continuar? ingrese s/n");
				fflush(stdin);
				scanf("%c",&letra);
				if(letra == 'n')
				{
					printf("usted ha salido del programa\n");
				}
			break;

			case 2:
				 printf("ha ingresado a procesar\n");
				 if(flag==0)
				 {
					 printf("error,Debe Iniciar antes de Procesar\n");
				 }
				 else
				 {
					 printf("procesado\n");
					 flagTwo=1;
				 }

				 printf("desea salir o continuar? ingrese s/n");
				 fflush(stdin);
				 scanf("%c",&letra);
				 if(letra == 'n')
				 {
				 	printf("usted ha salido del programa\n");
				 }
			break;

			case 3:
					printf("ha ingresado a finalizar\n");

					if(flag==0)
					{
						printf("error,Debe Iniciar antes de Finalizar\n");
					}
						if(flagTwo==0)
						{
							printf("\nNo se puede finalizar sin antes procesar\n.");
						}
						else
						{
							printf("finalizado\n");
						}


					printf("desea salir o continuar? ingrese s/n");
					fflush(stdin);
					scanf("%c",&letra);
					if(letra == 'n')
					{
						printf("usted ha salido del programa\n");
					}
			break;

			case 4:
						printf("esta seguro que desea salir? ingrese s/n");
						fflush(stdin);
						scanf("%c",&letra);
						if(letra == 'n')
						{
							printf("usted ha salido del programa\n");
						}
			break;

			default:
				  printf("error no colocó numero de 1 a 3\n");

				  printf("desea salir o continuar? ingrese s/n");
				  fflush(stdin);
				  scanf("%c",&letra);
				  		if(letra == 'n')
				  		{
				  			printf("usted ha salido del programa\n");
				  		}
			break;
		}

	}while(letra != 'n');

	return 0;
}

