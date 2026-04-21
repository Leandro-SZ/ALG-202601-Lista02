#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char letra = '1';
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	
	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I'|| letra == 'o' || letra == 'O'|| letra == 'u' || letra == 'U'){
		printf("A letra: %c, vogal", letra);
	} else {
		printf("A letra: %c, nao vogal\n", letra);
	}
	
	
	system("pause");
	return 0;
}