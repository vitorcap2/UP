// Aula2210_TEST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int lerv()
{
	int valor = 0;
	printf("Informe um valor inteiro: ");
	scanf_s("%i", &valor);
	return valor;
}

int funcao(int a, int b,int c,int d)
{
	int maior = a;

	if (maior < b)
	{
		maior = b;
	}
	if (maior < c)
	{
		maior = c;
	}
	if (maior < d)
	{
		maior = d;
	}
	return maior;
}
int media2(float a, float b, float c, float d)
{
	float media;
	media = ((a + b + c + d)/ 4);
	printf("O valor da media e: %.2f\n", media);
		if (a > media)
		{
			printf("%.1f ", a);
		}
		if (b > media)
		{
			printf("%.1f ", b);
		}
		if (c > media)
		{
			printf("%.1f ", c);
		}
		if (d > media)
		{
			printf("%.1f ", d);
		}
		return media;
}


int main()
{
	int primeiro = lerv();
	int segundo = lerv();
	int terceiro = lerv();
	int quarto = lerv();

		int valortot = funcao(primeiro, segundo, terceiro, quarto);

		printf("Maior valor encontrado: %i\n\n", valortot);

		int valor_media = media2(primeiro, segundo, terceiro, quarto);
		


	system("pause");
    return 0;
}

