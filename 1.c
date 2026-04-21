#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numero, hora, resto, minutos, segundos;
	
	printf("Insira uma quantidade em segundos: ");
	scanf("%d",&numero);
	
	hora = numero/3600;
	resto = numero % 3600;
	minutos = resto/60;
	segundos = resto %60;
	
	printf("O resultado da conversao de %ds e: %dH %dmin %ds \n", numero,hora,minutos,segundos);
	
	system("pause");
	return 0;
}