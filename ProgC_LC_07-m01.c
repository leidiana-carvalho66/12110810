#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Não foram fornecidos parâmetros.\n");
        return 0;
    }
    
    printf("Parâmetros fornecidos:\n");
    for (int i = 1; i < argc; i++) {
        printf("Parâmetro %d: %s\n", i, argv[i]);
    }

    return 0;
}

