#include <stdio.h>

/*
    Um condomínio quer monitorar o consumo de água de cada morador.
    Escreva um programa que leia o consumo mensal de água (em m³) de 5 moradores.
    Para cada morador, informe se o consumo está dentro da média (até 20 m³) ou acima.
    Ao final, deve mostrar o consumo médio geral.
*/

int main() {
    float consumo;
    float soma_consumo = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o consumo mensal de água do morador %d (em m³): ", i);
        scanf("%f", &consumo);
        soma_consumo += consumo;

        if (consumo <= 20) {
            printf("O consumo do morador %d está dentro da média.\n", i);
        } else {
            printf("O consumo do morador %d está acima da média.\n", i);
        }
    }

    float media = soma_consumo / 5;
    printf("O consumo médio geral é: %.2f m³\n", media);

    return 0;
}