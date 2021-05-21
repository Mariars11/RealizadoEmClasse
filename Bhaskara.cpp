//Resolu��o da f�rmula de Bhaskara
//Entrada a,b,c
//Sa�da: x' e x''
//Processamento: calculo

#include <stdio.h> //biblioteca para entrada e saida de dados: printf e scanf
#include <math.h> //biblioteca para realiza�ao de opera��es matematicas

int main() //inicio do algoritmo: fun��o main
{
	double a,b,c,delta,x1,x2; //declara��o de variavel
	printf("Digite o valor de a: "); //entrada a
	scanf("%lf", &a);
	printf("Digite o valor de b: "); //entrada b
	scanf("%lf", &b);
	printf("Digite o valor de c: "); //entrada c
	scanf("%lf", &c);
	delta = pow(b,2) - 4*a*c; //correspond�ncia de delta para facilitar o if
	if (a == 0 or delta < 0) //condi��es n�o possiveis
	    printf("Impossivel calcular, confira se A igual a zero, ou se delta negativo\n");
	  else
	    {
	    x1 = (-(b) + sqrt(delta)) / (2*a);
	    x2 = (-(b) - sqrt(delta)) / (2*a);
	    printf("O valor de x1 = %.2lf\tO valor de x2 = %.2lf\n", x1,x2);
	    }
	return 0; //retorno da fun��o
} //final do algoritmo
