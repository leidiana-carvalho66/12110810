#include <stdio.h>

// exercicio 6 //
//Leidiana Carvalho//

int main() {
    int nota1, nota2;
    float media;
	
    printf("Digite a nota da primeira disciplina: ");
    scanf("%d", &nota1);
    printf("Digite a nota da segunda disciplina: ");
    scanf("%d", &nota2);

    media = (nota1 + nota2) / 2.0f; 

    printf("A média das notas é: %.2f\n", media);

    return 0;
}
