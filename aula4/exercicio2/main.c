#include <stdio.h>

int main() {
    int saque;

    // Estoque inicial
    int notas200 = 10;
    int notas100 = 10;
    int notas50 = 10;
    int notas20 = 10;
    int notas10 = 10;
    int notas5 = 10;

    int qtd200 = 0;
    int qtd100 = 0;
    int qtd50 = 0;
    int qtd20 = 0;
    int qtd10 = 0;
    int qtd5 = 0;

    int restante;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &saque);

    // Verifica se o valor é válido
    if (saque <= 0 || saque % 5 != 0) {
        printf("Valor de saque invalido.\n");
        return 0;
    }

    restante = saque;


    qtd200 = restante / 200;

    if (qtd200 > notas200 - 1)
        qtd200 = notas200 - 1;

    restante -= qtd200 * 200;


    qtd100 = restante / 100;

    if (qtd100 > notas100 - 1)
        qtd100 = notas100 - 1;

    restante -= qtd100 * 100;


    qtd50 = restante / 50;

    if (qtd50 > notas50 - 1)
        qtd50 = notas50 - 1;

    restante -= qtd50 * 50;


    qtd20 = restante / 20;

    if (qtd20 > notas20 - 1)
        qtd20 = notas20 - 1;

    restante -= qtd20 * 20;


    qtd10 = restante / 10;

    if (qtd10 > notas10 - 1)
        qtd10 = notas10 - 1;

    restante -= qtd10 * 10;


    qtd5 = restante / 5;

    if (qtd5 > notas5 - 1)
        qtd5 = notas5 - 1;

    restante -= qtd5 * 5;

    
    if (restante != 0) {
        printf("Nao foi possivel realizar o saque.\n");
    } else {
        printf("\nSaque realizado com sucesso!\n");

        printf("Notas de R$ 200: %d\n", qtd200);
        printf("Notas de R$ 100: %d\n", qtd100);
        printf("Notas de R$ 50:  %d\n", qtd50);
        printf("Notas de R$ 20:  %d\n", qtd20);
        printf("Notas de R$ 10:  %d\n", qtd10);
        printf("Notas de R$ 5:   %d\n", qtd5);

        printf("Quantidade total de cedulas: %d\n", qtd200 + qtd100 + qtd50 + qtd20 + qtd10 + qtd5);
    }

    return 0;
}