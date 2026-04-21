#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   )

int main() {
    int sorteado, tentativa, contador = 0;

    srand(time(NULL));

    sorteado = rand() % 101;

    printf("Bem-vindo ao jogo! Tente adivinhar o numero de 0 a 100.\n");

   
    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);
        contador++; 

        if (tentativa < sorteado) {
            printf("O numero sorteado e MAIOR!\n");
        } 
        else if (tentativa > sorteado) {
            printf("O numero sorteado e MENOR!\n");
        } 
        else {
            printf("\nPARABENS! Voce acertou em %d tentativas.\n", contador);
        }

    } while (tentativa != sorteado); 

	printf("\n");
	system("pause");
    return 0;
}