// Aula alg 2 20112018_Struct.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "math.h"


struct Funcionario {

	char nome[10];
	int cpf[11];
	int data_nascimento[8];
	double salario[12];

};

int main()
{


	void leiaFuncionario() {

		struct Funcionario novoFuncionario;

		printf("Digite o nome:");
		gets_s(novoFuncionario.nome);







	}


	system("pause");
}

