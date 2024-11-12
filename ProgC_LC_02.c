#include <stdio.h>

// exercicio 2 //
//Leidiana Carvalho//
int main() {
    int numeroInteiro;
    float numeroReal, produto;

    printf("Digite um número inteiro: ");
    scanf("%d", &numeroInteiro);

    printf("Digite um número real: ");
    scanf("%f", &numeroReal);

    produto = numeroInteiro * numeroReal;

    printf("O produto entre %d (inteiro) e %.2f (real) é: %.2f\n", numeroInteiro, numeroReal, produto);

    return 0;
}
