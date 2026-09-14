#include <stdio.h>

/*
    Uma loja quer saber a nota média de atendimento dos clientes.
    Um sistema deve ler a nota de atendimento
    (de 0 a 10) de 10 clientes e calcular a média geral.
    Se a média for menor que 7, deve exibir uma mensagem de alerta.
*/

int main() {

    float nota;
    float soma_notas = 0;
    int i = 0;

    while (i < 10) {
        printf("Digite a nota de atendimento do cliente %d (0 a 10): ", i + 1);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
            continue;
        }

        soma_notas += nota;
        i++;
    }

    float media = soma_notas / 10;
    printf("A nota média de atendimento é: %.2f\n", media);

    if (media < 7) {
        printf("Alerta: A nota média está abaixo de 7!\n");
    }

    return 0;

}