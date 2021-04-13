#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese"); //acentuação
	//declaração de variavel
	int num;
	//entrada
	printf("Informe um número: ");
	scanf("%d", &num);
	//condição para par ou impar
	if(num % 2 == 0)
	{
		printf("O número %d é par", num);
	}
	else 
	{
		printf("O número %d é impar", num);
	}
	
	return 0;
}
