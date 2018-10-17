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
	int c;
	c = a + b;
	return c;
}
int test(int a, int b)
{
	int m;
	m = a - b;
	return m;
}
int subtracao(int a, int b)
{
	int v;
	v = a / b;
	return v;
}
int multi(int a, int b)
{
	int h;
	h = a * b;
	return h;
}
int main()
{
	HelloWorld();
	int e, f;
	printf("Informe os valores\n");
	scanf_s("%i", &e);
	scanf_s("%i", &f);
	int d = Soma2Valores(e, f);
	int p = test(e, f);
	int z = subtracao(e, f);
	int n = multi(e, f);
	printf("\nResultado: %i\n", d);
	printf("Subtracao: %i\n", p);
	printf("Divisao: %i\n", z);
	printf("Multiplicacao: %i\n", n);
	system("pause");
	return 0;