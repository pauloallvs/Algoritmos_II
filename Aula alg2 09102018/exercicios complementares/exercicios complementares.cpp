// exercicios complementares.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"

#define DIML 2
#define DIMC 2


int 
      main()
{
	/* v
	int i, vetor1[10], vetor2[10];


	for (i = 0; i < 10; i++) {
		vetor1[i] = (i + 1) * 2;
	}
	for (i = 0; i < 10; i++) {
		printf_s("%d\n", vetor1[i]);
	}
	printf_s("vetor2 => ");
	for (i = 10; i < 19; i++) {
		vetor2[i] = i + 10;
	}
	for(i = 10; i < 19; i++){
		printf_s("%d\n", vetor2[i]);

	}


	int i, vetor[8], quant = 0, soma = 0, soma30 = 0, somatodos = 0;

	for (i = 0; i < 8; i++) {
		printf_s("Informe 8 numeros inteiros%i =", i + 1);
		scanf_s("%i", &vetor[i]);

	}
	if (i = 0; i < 8; i++) {

		soma = soma + vetor[i];
		if (vetor[i] > 30) {
			quant++;
			soma30 = soma30 + vetor[i];
			printf("\nNumero maior que 30 = %i", vetor[i]);
		}
	}
	printf("\n\nQuantidade de numeros maiores que 30 = %i", quant);
	printf("\n\nSoma dos numeros maiores que 30 = %i", soma30);
	printf("\n\nSoma total dos numeros = %i", quant);
	*/



	int i, j;
	int matriz1[DIML][DIMC];
	int matriz2[DIML][DIMC];
	int matriz3[DIML][DIMC];

	printf_s("Matriz 1");
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {
			printf("\n Matriz1 - linha %i coluna %i\n", i, j);
			scanf_s("%i", &matriz1[i][j]);
		}
		printf_s("\n");
	}
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {
			printf_s("%i ", matriz1[i][j]);
		}
		printf_s("\n");
	}


	printf_s("Matriz 2");
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {
			printf("\n Matriz2 - linha %i coluna %i \n ", i, j);
			scanf_s("\n%i", &matriz2[i][j]);
		}
		printf_s("\n");
	}
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {
			printf_s("%i ", matriz2[i][j]);
		}
		printf_s("\n");
	}


	printf_s("Matriz 3");
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {
			printf("\n Matriz3 - linha %i coluna %i\n", i, j);
			scanf_s("\n%i", &matriz3[i][j]);
		}
		printf_s("\n");
	}
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {
			printf_s("%i ", matriz3[i][j]);
		}
		printf_s("\n");
	}
	for (i = 0; i < DIML; i++) {
		for (j = 0; j < DIMC; j++) {
			matriz3[i][j] = matriz2[i][j] + matriz1[i][j];
		}
		
	}
	   
	system("pause");

}

