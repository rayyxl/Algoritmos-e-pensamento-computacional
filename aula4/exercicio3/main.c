#include <stdio.h>

int main() {
    int a, b, c;
    int maior, menor, intermediario;

    printf("Digite a: ");
    scanf("%d", &a);

    printf("Digite b: ");
    scanf("%d", &b);

    printf("Digite c: ");
    scanf("%d", &c);

    // Maior valor
    if (a >= b && a >= c)
        maior = a;
    else if (b >= a && b >= c)
        maior = b;
    else
        maior = c;

    // Menor valor
    if (a <= b && a <= c)
        menor = a;
    else if (b <= a && b <= c)
        menor = b;
    else
        menor = c;

    // Valor intermediário
    if ((a >= b && a <= c) || (a <= b && a >= c))
        intermediario = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        intermediario = b;
    else
        intermediario = c;

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Valor intermediario: %d\n", intermediario);

    // Valores repetidos
    if (a == b || a == c || b == c)
        printf("Existem valores repetidos.\n");
    else
        printf("Nao existem valores repetidos.\n");

    // Os três são iguais
    if (a == b && b == c)
        printf("Os tres valores sao iguais.\n");
    else
        printf("Os tres valores nao sao iguais.\n");

    // Ordem crescente
    if (a < b && b < c)
        printf("Estao em ordem crescente.\n");
    else
        printf("Nao estao em ordem crescente.\n");

    // Ordem decrescente
    if (a > b && b > c)
        printf("Estao em ordem decrescente.\n");
    else
        printf("Nao estao em ordem decrescente.\n");

    return 0;
}