#include <stdio.h>

int main ()
{
	float media, num, soma;
	int i; //i variavel contador
	
	soma = 0; // 0 não interfere nas somas
	
	for (i = 1; i <= 5; i++)
	{
		printf("Digite o numero %d: ", i);
		scanf("%f", &num);
		soma = soma + num;
	}
	
	    media = soma / 5;
	    printf ("Media: %.1f", media);
	
	
	
	return 0;
}
