// aula alg2 23102018_condicionais.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "iostream"



float LerSalario() {
	
	printf("Informe o salario: ");
	float salario = 0;
	scanf_s("%f", &salario);
	return salario; 
}

float calculaIR(float salario, float aliquota, float deducao) {

	return (salario * aliquota) - deducao;
}


void apresentarIR(float salario)
{
	float ir = 0;

	if (salario <= 1903.98) {
		printf("Isento\n");
	}
	else if (salario <= 2826.65) {
		ir = calculaIR(salario, 0.075, 142.8);
		printf("Aliquota: 7.5\%%, deducao: 142.80\n");
		printf("Valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else if (salario <= 3751.05) {
		ir = calculaIR(salario, 0.15, 354.8);
		printf("Aliquota: 15\%%, deducao: 354.8\n");
		printf("Valor IR:  %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else if (salario <= 4664.68) {
		ir = calculaIR(salario, 0.225, 636.13);
		printf("Aliquota: 22.5\%%, deducao: 636.13\n");
		printf("Valor IR:  %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
	else {
		ir = calculaIR(salario, 0.275, 869.36);
		printf("Aliquota: 27.5\%%, deducao: 869.36\n");
		printf("Valor IR:  %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}
}


void divisaoDeNumero(float numero) {
	
	float resultado = numero / 5;
	float sobra = (resultado) % 4;
	
}

switch (sobra)
{
case 1:
	printf("")
	



default:
	break;
}



int main()
{
	/*float salario = LerSalario();
	apresentarIR(salario);
	printf("\n\n");*/



	system("pause");

}

