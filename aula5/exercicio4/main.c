#include <stdio.h>

/*
    Um aplicativo quer acompanhar a meta diária de passos de um usuário.
    Faça um programa que leia a quantidade de passos dados por um usuário a cada hora. 
    O programa deve parar quando o total atingir ou ultrapassar 10.000 passos
    e então informar quantas horas foram necessárias.
*/

int main() {

    int passos, total_passos = 0, horas = 0;

    while (total_passos < 10000) {
        printf("Digite a quantidade de passos dados na hora %d: ", horas + 1);
        scanf("%d", &passos);

        if (passos < 0) {
            printf("Quantidade de passos inválida. Digite um valor positivo.\n");
            continue;
        }

        total_passos += passos;
        horas++;
    }

    printf("Parabéns! Você atingiu a meta de 10.000 passos em %d horas.\n", horas);

    return 0;

}