// Aula 20112018_Recursividade.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"


int soma(int numero) {

	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &numero);

	if (numero == 1) {
		return 1;

	}
	else {
		return numero + soma(numero - 1);
	}

}

int main()
{
	
	int soma();

	

	system("pause");

}

