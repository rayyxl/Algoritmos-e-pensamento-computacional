#include <stdio.h>

int main() {
    int a, b, c;
    int maior, lado1, lado2;

    printf("Digite o lado a: ");
    scanf("%d", &a);

    printf("Digite o lado b: ");
    scanf("%d", &b);

    printf("Digite o lado c: ");
    scanf("%d", &c);

    // Verifica se os valores formam um triangulo
    if ((a <= 0 || b <= 0 || c <= 0) || (a + b <= c || a + c <= b || b + c <= a)) {

        printf("Os valores nao formam um triangulo.\n");

    } else {

        // classificacao quanto aos lados
        if (a == b && b == c) {
            printf("Triangulo equilatero.\n");
        }
        else if (a != b && b != c && a != c) {
            printf("Triangulo escaleno.\n");
        }
        else {
            printf("Triangulo isosceles.\n");
        }

        // Descobre o maior lado
        if (a >= b && a >= c) {
            maior = a;
            lado1 = b;
            lado2 = c;
        }
        else if (b >= a && b >= c) {
            maior = b;
            lado1 = a;
            lado2 = c;
        }
        else {
            maior = c;
            lado1 = a;
            lado2 = b;
        }

        // classificacao quanto aos angulos
        if (lado1 * lado1 + lado2 * lado2 == maior * maior) {
            printf("Triangulo retangulo.\n");
        }
        else if (lado1 * lado1 + lado2 * lado2 > maior * maior) {
            printf("Triangulo acutangulo.\n");
        }
        else {
            printf("Triangulo obtusangulo.\n");
        }
    }

    return 0;
}