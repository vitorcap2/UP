// Aula1710_condicionais.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int a = 5;

	if (true)
	{
		printf("Imprima essa frase\n");
		// sempre irá imprimir pois o resultado da expressao no if é verdadeiro
	}

	if (false)
	{
		printf("Essa frase nunca sera impressa\n");
		// resultado da expressao é falso, nunca ira utilizao este bloco
	}

	if (a == 3)
	{
		printf("A eh igual a 3\n");
	}

	if (a != 3);
	{
		printf("A eh diferente de 3\n");
	}

	if (a <= 5) // (-1000, 0, 2,3,4,5)
	{
		printf("A eh menor ou igual a 5\n");

	}

	if (a < 5) // (-10000, 0,1,2,3,4)
	{

	}

	if (a == 5 && a != 3)
	{

	}

	if ((a != 5) && ((a % 5 == 0) && (a % 7 == 0)))
	{

	}

	system("pause");
    return 0;
}

