#include <stdio.h>
#include <stdlib.h>

int main() {
    int somaTotal = 0;


    for (int i = 0; i <= 6; i++) {
        
        for (int j = i; j <= 6; j++) {
            
            
            if (i == 4) {
                somaTotal = somaTotal + 4;
            }
            
    
            if (j == 4) {
                somaTotal = somaTotal + 4;
            }
        }
    }

    printf("A soma de todos os valores 4 no domino e: %d\n", somaTotal);
	
	printf("\n");
	system("pause");
    return 0;
}