// Aula0810.cpp : Defines the entry point for the console application.
//

/*
Comentário longo, bloco	
(mais de uma linha)
*/

#include "stdafx.h" 
// inclusao de biblioteca
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
	int e;
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

	// texto (String) e valores junto
	printf("Aqui vai o valor %i, total da soma.\n", 98 + 5);

	printf("%i + %i = %i\n", 500, 600 , 500 + 600);

	printf(" Por algum acaso esqueci o valor daqui: %i\n");

	a = 150;
	e = 275;
	int f = a + e;

	printf("O resultado da soma eh: %i\n", f);

	// leitura SCANF / SCANF_S

	printf("Informe um valor\n");

	scanf_s("%i", &f);
	
	printf("\nVoce digitou %i\n", f); // verificacao

	printf("Digite um valor real: ");	

	scanf_s("%f", &b);

	printf("\nSeu valor eh: %f", b);

	system("pause");

	
    return 0;
}

