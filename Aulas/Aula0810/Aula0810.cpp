// Aula0810.cpp : Defines the entry point for the console application.
//

/*
Comentário longo, bloco	
(mais de uma linha)
*/

#include "stdafx.h" // inclusao de biblioteca
// C ANSI
#include <stdio.h>
#include <stdlib.h>

int a; // inteiro
float b; // real (ponto flutuante)
double c; // real (maior precisao)
bool d; // booleano (verdadeiro/ falso) (true/false)



int main()
{
	// variavel local
	// variavel local (visivel somente nesa funcao, a partir dessa linha)
	int f; 
	// \n pula linha
	// \t tubulacao
	printf("Hello world!\n");

	printf("A\tB\tC\t\n");
	printf("A\tB\tC\t\n");
	printf("A\tB\tC\t\n");

	printf("\n");
	// como imprimir valores
	printf("%i\n", 99);
	printf("%f\n", 99.55);

	system("pause");



    return 0;
}

