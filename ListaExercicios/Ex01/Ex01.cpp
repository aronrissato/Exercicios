#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int nrfuncionario, i;
float salario, mediasal, fimsal;


float CalculoMedia() {

	fimsal = mediasal / nrfuncionario;

	return fimsal;
}


int main()
{
	printf("Informe o numero de funcionarios da sua empresa:\n");
	scanf_s("%i", &nrfuncionario);


	for (i = 0; i < nrfuncionario; i++)
	{
		printf("Informe o salario do funcionario:\n");
		scanf_s("%f", &salario);

		mediasal = mediasal + salario;
	}

	CalculoMedia();

	printf("A media salarial da empresa eh de:%2.f\n\n", CalculoMedia());

	system("pause");
	return 0;
}
