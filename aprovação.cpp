#include <stdio.h>

int main()
{
	//Declaração de variavel numerica
	float n1, n2, n3, n4, media;
	int frequencia;
	//Declaração de variavel texto
	char nome[20], sexo;
	
	printf("Informe seu sexo, f para feminino e m para masculino: ");
	scanf("%c", &sexo);
	
	printf("Informe a  nota 1: "); 
	scanf("%f", &n1); 
	
	printf("Informe a nota 2: "); 
	scanf("%f", &n2); 
	printf("Informe a  nota 3: "); 
	scanf("%f", &n3); 
	
	printf("Informe a nota 4: ");
	scanf("%f", &n4); 
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	
	printf("Informe a frequencia em aula: ");
	scanf("%d", &frequencia);
	
	
	media = (n1 + n2 + n3 + n4) / 4;
	
	printf("Media: %.1f\t", media); 
	
	if (media >= 7 && frequencia >= 75)
	{
		printf("%s, %c aprovado(a)", nome, sexo);
	} 
	else 
	{
		printf("%s, %c reprovado(a)", nome, sexo);
	}
   
   return 0;	
}
