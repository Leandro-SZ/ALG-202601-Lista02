#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
   
    long long fatorial = 1; 

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        
        for (i = n; i >= 1; i--) {
            fatorial = fatorial * i;
        }

        printf("O fatorial de %d (%d!) e: %lld\n", n, n, fatorial);
    }

    printf("\n");
    system("pause");
    return 0;
}