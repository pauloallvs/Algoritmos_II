// Aula alg 2 16102018__condicionais.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


/*
	
	CONDICIONAIS


	Operadores lógicos

	== (igual)
	!= (diferente)
	< (menor)
	> (maior)
	<= (menor igual)
	>= (maior igual)


*/

int main()
{
	
	int a = 0;

	if (a == 0)
	{
		printf("A igual a zero");
	}
	int b = 3;

	if (b < a)
	{
		printf("B menor que A");
	}
	if (a <= b) //a pode ser igual, pode ser igual e pode ser diferente
	{
		printf("A menor ou igua a B");
	}


	system("pause");


}
