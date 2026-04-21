#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int n1,n2,n3;
	float media;
	
	printf("Insira o primeiro numero: ");
	scanf("%d",&n1);
	printf("Insira o segundo numero: ");
	scanf("%d",&n2);
	printf("Insira o terceiro numero: ");
	scanf("%d",&n3);
	
	media = (n1+n2+n3)/3;
	
	printf("\nA media dos numeros %d, %d, %d igual a: %.2f\n", n1,n2,n3,media);
	
	system("pause");
	return 0;
	
}