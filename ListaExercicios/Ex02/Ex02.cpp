#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int i, idade, contalt, contidade;
float altura, alturamedia, idademedia, idadefinal, alturafinal;

int main()
{

	for (i = 0; i < 45; i++)
	{
		printf("Informe a idade:\n");
		scanf_s("%i", &idade);

		printf("Informe a altura: \n");
		scanf_s("%.2f", &altura);


		if (altura < 1.70)
		{
			idademedia = idademedia + idade;

			contidade++;
		}

		if (idade > 20)
		{
			alturamedia = alturamedia + altura;

			contalt++;
		}
	}
	printf("\n");

	idadefinal = idademedia / contalt;

	alturafinal = alturamedia / contidade;


	printf("A media da idade dos alunos com mais de 1.70 de altura eh de: %f\n\n", idadefinal);
	printf("A altura media dos alunos com mais de 20 anos eh de: %.2f\n\n", alturafinal);

	system("pause");
	return 0;
}