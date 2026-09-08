#include <stdio.h>

int main() {
    int opcao;
    int numero;

    printf("===== MENU =====\n");
    printf("1 - Verificar numero par ou impar\n");
    printf("2 - Verificar se e positivo ou negativo\n");
    printf("3 - Calcular o quadrado do numero\n");
    printf("4 - Sair\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("Digite um numero: ");
            scanf("%d", &numero);

            if (numero % 2 == 0)
                printf("O numero e par.\n");
            else
                printf("O numero e impar.\n");

            if (numero > 0)
                printf("O numero e positivo.\n");
            else if (numero < 0)
                printf("O numero e negativo.\n");
            else
                printf("O numero e zero.\n");

            break;

        case 2:
            printf("Digite um numero: ");
            scanf("%d", &numero);

            if (numero > 0)
                printf("O numero e positivo.\n");
            else if (numero < 0)
                printf("O numero e negativo.\n");
            else
                printf("O numero e zero.\n");

            break;

        case 3:
            printf("Digite um numero: ");
            scanf("%d", &numero);

            printf("O quadrado de %d e %d.\n", numero, numero * numero);

            break;

        case 4:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}