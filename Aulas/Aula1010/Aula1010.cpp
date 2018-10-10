// Aula1010.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void HelloWorld() //void não tem retorno
{
	printf("Hello world!\n");
}

int Soma2Valores(int a, int b)
{
	/* int c;
	c = a + b;
	return c; */

	return a + b;
}

int main()
{
	HelloWorld();
	int e, f;
	printf("Informe os valores\n");
	scanf_s("%i", &e);
	scanf_s("%i", &f);
	int d = Soma2Valores(e, f);

	printf("\nResultado: %i\n", d);

 	system("pause");
    return 0;
}

