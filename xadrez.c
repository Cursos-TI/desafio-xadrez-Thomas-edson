#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) return;

    printf("Cima\n");
    moverTorre(movimentos - 1);

    printf("Baixo\n");
    moverTorre(movimentos - 1);

    printf("Esquerda\n");
    moverTorre(movimentos - 1);

    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função recursiva para movimentação do Bispo (movimentos diagonais)
void moverBispo(int movimentos) {
    if (movimentos == 0) return;

    printf("Cima Direita\n");
    moverBispo(movimentos - 1);

    printf("Cima Esquerda\n");
    moverBispo(movimentos - 1);

    printf("Baixo Direita\n");
    moverBispo(movimentos - 1);

    printf("Baixo Esquerda\n");
    moverBispo(movimentos - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int movimentos) {
    moverTorre(movimentos);
    moverBispo(movimentos);
}

// Função para simular os 8 saltos possíveis do Cavalo
void moverCavalo() {
    int dx[] = {2, 2, -2, -2, 1, -1, 1, -1};
    int dy[] = {1, -1, 1, -1, 2, 2, -2, -2};

    for (int i = 0; i < 8; i++) {
        if (dy[i] > 0) printf("Cima ");
        else if (dy[i] < 0) printf("Baixo ");

        if (dx[i] > 0) printf("Direita\n");
        else if (dx[i] < 0) printf("Esquerda\n");
    }
}

// Função principal
int main() {
    int movimentos = 1;  // Número de movimentos recursivos

    printf("Movimentação da Torre:\n");
    moverTorre(movimentos);
    printf("\n");

    printf("Movimentação do Bispo:\n");
    moverBispo(movimentos);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    moverRainha(movimentos);
    printf("\n");

    printf("Movimentação do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
