#include <stdio.h>

int main() {
    char nome[30];
    char cor[20];
    int tropas;

    printf("Digite o nome do territorio: ");
    scanf("%s", nome);

    printf("Digite o numero de tropas: ");
    scanf("%d", &tropas);

    printf("\n=== INFORMAÇÕES DO TERRITORIO ===\n");
    printf("Nome: %s\n", nome);
    printf("Cor: %s\n", cor);
    printf("Tropas: %d\n", tropas);

    return 0;
}