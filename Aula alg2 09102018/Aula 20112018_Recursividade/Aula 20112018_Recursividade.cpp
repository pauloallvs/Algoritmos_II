// Aula 20112018_Recursividade.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int LerNumeroInteiro() {
	int a;

	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	return a;
}



int soma(int numero) {
	
	if (numero == 1) {
		return 1;

	}
	else {
		return numero + soma(numero - 1);
	}

}

int main()
{	
	
	int d = LerNumeroInteiro();
	int result = soma(d);

	printf("Resultado: %i\n", result);

	
	system("pause");

}

