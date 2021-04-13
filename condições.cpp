//Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, 
//e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par 
//escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

#include <stdio.h>
#include <locale.h>

int main ()
{
	//declaração de variaveis numericas
	int a, b, c, d;
	
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	
	printf("Informe o valor de b: ");
	scanf("%d", &b);
	
	printf("Informe o valor de c: ");
	scanf("%d", &c);
	
	printf("Informe o valor de d: ");
	scanf("%d", &d);
	
	//condição
	if (b > c  && d > a && c + d > a + b && a % 2 == 0)
	{
		printf("Valores aceitos");
	}
	else
	{
		printf("Valores nao aceitos");
	}
	return 0;
}
