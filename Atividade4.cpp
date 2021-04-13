#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	if(idade < 0)
	{
		printf("Não é possivel realizar, por favor digite outro valor!");
	}
	if (idade >= 0 && idade <= 3)
	{
		printf("Bebê\n");
	}
	else if (idade >= 4 && idade <= 10)
	{
		printf("Criança\n");
	}
	else if (idade >= 11 && idade <= 17)
	{
		printf("Adolescente\n");
	}
	else if (idade >= 18 && idade <= 60)
	{
		printf("Adulto\n");
	}
	else if (idade >= 41 && idade <= 60)
	{
		printf("Adulto 2\n");
	}
	else if (idade >= 61)
	{
		printf("Idoso\n");
	}
	
	return 0;
}
