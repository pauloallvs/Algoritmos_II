// Aula alg 2 18102018_condicionais.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "iostream"



int LerNumeroInteiro() {
	int a;

	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	return a;
}

int MaiorValorInteiro(int a, int b, int c, int d){

	int maior = a;

	if (maior < b) {

		maior = b;
	}
	if (maior < c) {

		maior = c;
	}
	if (maior < d) {

		maior = d;
	}
	
	return maior;
}


int main()
{
	
	int a = LerNumeroInteiro();
	int b = LerNumeroInteiro();
	int c = LerNumeroInteiro();
	int d = LerNumeroInteiro();
	int maiorNumero = MaiorValorInteiro( a,  b,  c,  d);

	printf("O maior numero é %i \n:", maiorNumero);

	system("pause");
    
}

