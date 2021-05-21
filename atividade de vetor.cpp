#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num[6], indice, auxiliar, troca;
	
	printf("Informe o número 1: ");
	scanf("%d", &num[1]);
	printf("Informe o número 2: ");
	scanf("%d", &num[2]);
	printf("Informe o número 3: ");
	scanf("%d", &num[3]);
	printf("Informe o número 4: ");
	scanf("%d", &num[4]);
	printf("Informe o número 5: ");
	scanf("%d", &num[5]);
	
	for(auxiliar = 0; auxiliar <= 4; auxiliar++){
		for(indice = auxiliar + 1; indice <=5; indice++){
			if(num[auxiliar] > num[indice]){
				troca = num[indice];
				num[indice] = num[auxiliar];
				num[auxiliar] = troca;				
			}
		}
	}
	
	printf("Os números ordenados são |%d| |%d| |%d| |%d| |%d|", num[1], num[2], num[3], num[4], num[5]);
	
	return 0;
}
