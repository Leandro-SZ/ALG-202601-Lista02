#include <stdio.h>
#include <stdlib.h>

int main() {
    float tamanhoMB, velocidadeMbps, tempoSegundos, tempoMinutos;

    printf("--- Calculo de Tempo de Download ---\n");

    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tamanhoMB);

    printf("Velocidade da Internet (Mbps): ");
    scanf("%f", &velocidadeMbps);


    tempoSegundos = (tamanhoMB * 8) / velocidadeMbps;

    
    tempoMinutos = tempoSegundos / 60;

    printf("\nO tempo aproximado de download e: %.2f minutos\n", tempoMinutos);

    printf("\n");
    system("pause");
    return 0;
}