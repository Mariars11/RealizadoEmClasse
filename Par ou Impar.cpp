#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acentua��o
	//declara��o de variavel
	int num;
	//entrada
	printf("Informe um n�mero: ");
	scanf("%d", &num);
	//condi��o para par ou impar
	if(num % 2 == 0)
	{
		printf("O n�mero %d � par", num);
	}
	else 
	{
		printf("O n�mero %d � impar", num);
	}
	
	return 0;
}
