// Algoritmos2_exercicio2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int leitura()
{
	int num;
	printf("informe um numero:");
	scanf_s("%i", &num);

	return num;

}

int expressao(int a, int b, int c)
{

	int d, r, s;

	r = pow(a + b, 2);
	s = pow(b + c, 2);
	d = (r + s) / 2;

	return d;
}



int main()
{

	int num_um = leitura();
	int num_dois = leitura();
	int num_tres = leitura();
	int resultado = expressao(num_um, num_dois, num_tres);

	printf_s("O resultado da expressao eh: %i\n", resultado);

	system("pause");
}

