// Aula 13112018_matriz_vetores_ponteiro.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"

void troca(float *a, float *b) {

	float c;

	float c = *b;
	float *b =*&a;
	float *a = c;

}



int main()
{
	
	system("pause");
}

