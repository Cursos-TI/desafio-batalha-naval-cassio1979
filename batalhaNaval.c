#include <stdio.h>
int main() {

    printf("Desafio Batalha Naval!\n");

    // Imprimindo a primeira linha do tabuleiro com as letras que representam as colunas
    printf("  A B C D E F G H I J\n");

    //Declarando uma matriz "tabuleiro" do tipo char com 10 linhas e 10 colunas
    char tabuleiro[10][10];

    //iniciando e imprimento o primeiro loop para mostrar o índice de numeração das linhas de 1 a 10
    for (int i = 0; i < 10; i++) {
      printf("%d ", i + 1);

        //iniciando o segundo loop para preencher com "0s" cada campo do tabuleiro.
        for (int j = 0; j < 10; j++) {
          tabuleiro[i][j] = '0';
          
            //iniciando o terceiro loop para introduzir o começo do navio horizontal no campo: linha 2, coluna 2. 
            for (int i = 0; i < 3; i++) {
              tabuleiro[2+i][2] = '3';
            }
            //iniciando loop para introduzir o começo do navio vertical no campo: linha 5, coluna 5.
            for (int j = 0; j < 3; j++) {
              tabuleiro[5][5+j] = '3';
            }
        //imprimento o tabuleiro e preenchendo os intervalos com espaços 
        printf("%c", tabuleiro[i][j]);
        printf(" ");        
        }
        printf("\n");
    }
    return 0;
}
