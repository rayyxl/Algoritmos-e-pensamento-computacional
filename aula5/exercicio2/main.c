#include <stdio.h>

/*
    Um jovem quer juntar dinheiro e acompanhar o saldo do seu cofrinho.
    Faça um programa que simule um cofrinho digital. O usuário pode
    adicionar moedas de R$0,50, R$1,00 ou R$2,00 quantas vezes quiser.
    Quando decidir parar, o programa deve mostrar o total acumulado.
*/

int main() {

    float total = 0;

    while (true) {
        int opcao;
        printf("Escolha uma opção:\n");
        printf("1. Adicionar R$0,50\n");
        printf("2. Adicionar R$1,00\n");
        printf("3. Adicionar R$2,00\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total += 0.50;
        } else if (opcao == 2) {
            total += 1.00;
        } else if (opcao == 3) {
            total += 2.00;
        } else if (opcao == 4) {
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    printf("Total acumulado no cofrinho: R$%.2f\n", total);
    return 0;
}