// Aula alg2 09102018.cpp : define o ponto de entrada para o aplicativo do console.
//


/*
As linhas abaixo contem inclusao de bibliotecas
*/

// para compilar o codigo (Ctrl + Shift + b)

// para executar o codigo (F5)


#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>



// variaveis globais
int a; //inteiro
float b; //real (pouca precisao)
double c; //real (grande precisao)




int main()
{

	// variaveis locais 
	char d; //caractere
	bool e; //booleano (true or false)


	printf("Hello World!\n");			// \n - pula linha
	
	printf("Teste\t\tTeste\n\n");		// \t - tabulação

	printf("Mostrando o valor %i \n", 5);

	printf("A soma de %i e %i eh: %i \n", 99,10,99+10);

	printf("Mostrando %f, que eh um numero real \n", 7.9);

	printf("Olha soh esse numero: %i \n\n\n");

	int f;
	f = 8;
	a = f * 2;

	printf("Resultado da multiplicacao de %i por 2 eh: %i \n", f, a);


	printf("Digite um valor inteiro:");
	scanf_s("%i", &a);
	printf("\n\n Valor digitado foi: %i\n\n", a);



	printf("Digite um valor real:");
	scanf_s("%f", &b);
	printf("\n\n Voce digitou: %f \n\n", b);
						

	system("pause");
	return 0;
	
}


