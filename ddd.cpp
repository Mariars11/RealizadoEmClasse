/*Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual
cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int ddd;
	
	printf("Informe o ddd: ");
	scanf("%d", &ddd);
	
	if(ddd == 61)
	{
		printf("Bras�lia");
	}
	else if(ddd == 71)
	{
		printf("Salvador");
	}
	else if(ddd == 11)
	{
		printf("Sao Paulo");
	}
	else if(ddd == 21)
	{
		printf("Rio de Janeiro");
	}
	else if(ddd == 32)
	{
		printf("Juiz de fora");
	}
	else if(ddd == 19)
	{
		printf("Campinas");
	}
	else if(ddd == 27)
	{
		printf("Vit�ria");
	}
	else if(ddd == 31)
	{
		printf("Belo Horizonte");
	}
	else 
	{
		printf("Este ddd: %d, � de uma cidade no Brasil sem identifica��o. Por favor! Digite um v�lido.", ddd);
	}
}
