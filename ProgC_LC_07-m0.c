#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("Não foram fornecidos parâmetros.\n");
    return 1;
    }
            printf("ola %s, bom dia!\n", argv[1]);
    return 0;
}


