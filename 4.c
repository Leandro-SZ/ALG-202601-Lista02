#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, a, b, resto, MMC, MDC;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &n1); // Corrigido: era %d
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &n2); // Corrigido: era %d


    a = n1;
    b = n2;

    
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    
    MDC = a;

    
    if (n1 == 0 || n2 == 0) {
        MMC = 0;
    } else {
        
        MMC = (n1 / MDC) * n2;
    }

    printf("MDC: %d | MMC: %d\n", MDC, MMC);

    system("pause");
	return 0;
}