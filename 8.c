#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;

    printf("--- Calculadora de IMC ---\n");

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);


    imc = peso / (altura * altura);

    printf("\nSeu IMC e: %.2f\n", imc);

    
    printf("\n");
    system("pause");
    return 0;
}