// Aula alg 2 11102018_funcoes.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


/*void HelloWorld()
{
	printf("\nHello World!\n");
}
*/

int Somar2Valores(int x, int y)
{
	int c;
	c = x + y;
	return c;
}

float Divide2Valores(int x, int y)
{
	int c;
	c = x / y;
	return c;

}

float Subtrair2valores(int x, int y) 
{

	int c;
	c = x - y;
	return c;

}


int Multiplica2valores(int x, int y)
{

	int c;
	c = x * y;
	return c;


}
/*




int Valores()
{

	int a = Somar2Valores(50, 60);
	printf("Resultado da soma: %i \n", a);

	int b = 10;
	int c = 15;
	int d = Somar2Valores(b, c);
	printf("Resultado da soma: %i \n", d);

	return d;

}
*/



int LerNumeroInteiro()
{

	printf("informe um valor:\n");
	int numero;
	scanf_s("%i", &numero);
	return numero;
}

int main()
{


	int primeiroValor = LerNumeroInteiro();
	
	
	int segundoValor = LerNumeroInteiro();
	

	int d = Somar2Valores(primeiroValor, segundoValor);
	float e = Divide2Valores((float)primeiroValor, (float)segundoValor);
	int f = Multiplica2valores(primeiroValor, segundoValor);
	int g = Subtrair2valores(primeiroValor, segundoValor);
	printf("Resultado da soma: %i\n", d);
	printf("Resultado da divisao: %f\n", e);
	printf("Resultado da multiplicacao: %i\n", f);
	printf("Resultado da subtracao: %i\n", g);




	system("pause");
}