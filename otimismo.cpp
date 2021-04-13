#include <stdio.h>

int main()
{
	char nome [20];
	int i;
	printf("Informe seu nome: ");
	fgets (nome, 20, stdin);
	
	for (i = 1; i <= 5000; i++)
	{
		printf("Eu, %s vou passar em algoritmo com media 10!\n", nome);
	}
	
	return 0;
}
