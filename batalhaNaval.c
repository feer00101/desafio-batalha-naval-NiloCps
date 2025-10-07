#include <stdio.h>
void inicializarTabuleiro(int tabuleiro[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
}
int posicaoNavios(int tabuleiro[10][10])
{
    for (int j = 3; j <= 6; j++)
    {
        tabuleiro[3][j] = 3;
    }
    for (int i = 4; i <= 7; i++)
    {
        tabuleiro[i][7] = 3;
    }
}
void imprimirTabuleiro(int tabuleiro[10][10])
{
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 10; j++)
        {
            if (tabuleiro[i][j] == 3)
            {
                // Vermelho para navios
                printf("\033[31m%2d\033[0m", tabuleiro[i][j]);
            }
            else
            {
                // Cor padrão para água
                printf("%2d", tabuleiro[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
  int tabuleiro[10][10];
    inicializarTabuleiro(tabuleiro);

    posicaoNavios(tabuleiro);

    imprimirTabuleiro(tabuleiro);

    return 0; 
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
