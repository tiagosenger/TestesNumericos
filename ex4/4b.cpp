#include <iostream>
#include <cstdio>

int main() {
    double x, y;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    double soma = x + y;

    printf("A soma de x e y é: %lf\n", soma);

    return 0;
}

