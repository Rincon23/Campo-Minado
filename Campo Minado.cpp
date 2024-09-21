#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int op, l, c;
    int pontuacaojog1 = 0, pontuacaojog2 = 0;

    do {

        printf("\n\n..::CAMPO MINADO::..\n1. Iniciar jogo 5x5\n2. Iniciar jogo 10x10\n3. Exibir regras\n4. Instrucoes para jogar\n0. Sair\n\n");
        printf("Pontuacao\n");
        printf("Jogador 1: %d\n", pontuacaojog1);
        printf("Jogador 2: %d\n\n", pontuacaojog2);
        printf("Digite a opcao:");
        scanf_s("%d", &op);

        if (op == 1) {
            int perdeu = 0;
            srand(time(NULL));
            char vetf[5][5];
            int l, c, vet[5][5];
            for (int l = 0; l < 5; l++) {
                for (int c = 0; c < 5; c++) {
                    vetf[l][c] = 'O';
                    vet[l][c] = (rand() % 100);
                    if (vet[l][c] <= 20) {
                        vet[l][c] = 1;
                    }
                    else {
                        vet[l][c] = 0;
                    }

                }
            }
            int rodada = 0, jogador;
            do {
                if (rodada % 2 == 0) {
                    jogador = 1;
                }
                else {
                    jogador = 2;
                }
                rodada++;

                int lin, col;
                /*for (int l=0;l<5;l++) {
                  printf("\n");
                  for (int c=0;c<5;c++) {
                    printf(" %d ", vet[l][c]);
                  }
                }*/
                printf("\n");
                for (int l = 0; l < 5; l++) {
                    printf("\n");
                    printf(" %c ", vetf[l][0]);
                    printf(" %c ", vetf[l][1]);
                    printf(" %c ", vetf[l][2]);
                    printf(" %c ", vetf[l][3]);
                    printf(" %c ", vetf[l][4]);
                }
                printf("\n");

                printf("\nJogador numero %d digite a posicao em que quer jogar:\n", jogador);
                printf("\n");
                printf("Linha: ");
                scanf_s("%d", &lin);
                lin--;
                printf("Coluna: ");
                scanf_s("%d", &col);
                col--;
                printf("\n");
                if (((lin > -1) && (lin < 5)) && ((col > -1) && (col < 5))) {
                    if (vetf[lin][col] == 'O') {
                        if (vet[lin][col] == 1) {
                            perdeu = 1;
                            if (jogador == 1) {
                                pontuacaojog2++;
                            }
                            else {
                                pontuacaojog1++;
                            }
                            if (jogador == 1) {
                                jogador = 2;
                            }
                            else if (jogador == 2) {
                                jogador = 1;
                            }
                            printf("JOGADOR %d ganhou", jogador);
                        }
                        else {
                            vetf[lin][col] = 'X';
                        }
                    }
                    else {
                        rodada--;
                        printf("Esta posicao ja foi escolhida");
                    }
                }
                else {
                    rodada--;
                    printf("Linha ou coluna invalida");
                }

            } while (perdeu != 1);

        }
        else if (op == 2) {
            int perdeu = 0;
            srand(time(NULL));
            char vetf[10][10];
            int l, c, vet[10][10];
            for (int l = 0; l < 10; l++) {
                for (int c = 0; c < 10; c++) {
                    vetf[l][c] = 'O';
                    vet[l][c] = (rand() % 100);
                    if (vet[l][c] <= 20) {
                        vet[l][c] = 1;
                    }
                    else {
                        vet[l][c] = 0;
                    }

                }
            }
            int rodada = 0, jogador;
            do {
                if (rodada % 2 == 0) {
                    jogador = 1;
                }
                else {
                    jogador = 2;
                }
                rodada++;

                int lin, col;
                /* for (int l=0;l<10;l++) {
                   printf("\n");
                   printf(" %d ", vet[l][0]);
                   printf(" %d ", vet[l][1]);
                   printf(" %d ", vet[l][2]);
                   printf(" %d ", vet[l][3]);
                   printf(" %d ", vet[l][4]);
                   printf(" %d ", vet[l][5]);
                   printf(" %d ", vet[l][6]);
                   printf(" %d ", vet[l][7]);
                   printf(" %d ", vet[l][8]);
                   printf(" %d ", vet[l][9]);
                 } */
                printf("\n");
                for (int l = 0; l < 10; l++) {
                    printf("\n");
                    printf(" %c ", vetf[l][0]);
                    printf(" %c ", vetf[l][1]);
                    printf(" %c ", vetf[l][2]);
                    printf(" %c ", vetf[l][3]);
                    printf(" %c ", vetf[l][4]);
                    printf(" %c ", vetf[l][5]);
                    printf(" %c ", vetf[l][6]);
                    printf(" %c ", vetf[l][7]);
                    printf(" %c ", vetf[l][8]);
                    printf(" %c ", vetf[l][9]);
                }
                printf("\n");

                printf("\nJogador numero %d digite a posicao em que quer jogar:\n", jogador);
                printf("\n");
                printf("Linha: ");
                scanf_s("%d", &lin);
                lin--;
                printf("Coluna: ");
                scanf_s("%d", &col);
                col--;
                printf("\n");
                if (((lin > -1) && (lin < 10)) && ((col > -1) && (col < 10))) {
                    if (vetf[lin][col] == 'O') {
                        if (vet[lin][col] == 1) {
                            perdeu = 1;
                            if (jogador == 1) {
                                pontuacaojog1++;
                            }
                            else {
                                pontuacaojog2++;
                            }
                            if (jogador == 1) {
                                jogador = 2;
                            }
                            else if (jogador == 2) {
                                jogador = 1;
                            }
                            printf("JOGADOR %d ganhou", jogador);
                        }
                        else {
                            vetf[lin][col] = 'X';
                        }
                    }
                    else {
                        rodada--;
                        printf("Esta posicao ja foi escolhida");
                    }
                }
                else {
                    rodada--;
                    printf("Linha ou coluna invalida");
                }

            } while (perdeu != 1);

        }
        else if (op == 3) {
            printf("\nRegras do Campo Minado:\n");
            printf("1. O objetivo do jogo é tentar escolher as células que não contenham a bomba.\n");
            printf("2. Se uma célula com uma bomba for escolhida, o jogador perde.\n");
            printf("3. Os jogadores alternam entre si, escolhendo uma célula para revelar.\n");
            printf("4. Se algum jogador escolher uma célula que ja foi escolhida ou a celula for invalida a jogada é resetada\n");
            printf("5. O jogo continua até que um dos jogadores escolham uma célula com bomba.\n\n");

        }
        else if (op == 4) {
            printf("\nInstrucos para Jogar Campo Minado:\n");
            printf("1. Escolha a opcao 'Iniciar jogo' 5x5 ou 10x10 para comecar um novo jogo.\n");
            printf("2. Digite a linha e coluna para selecionar a célula que deseja revelar.\n");
            printf("3. Se a célula contiver uma bomba, você perde o jogo.\n");
            printf("4. Se a célula não contiver uma bomba o jogador passa a vez para o proximo.\n");
            printf("5. Continue revelando células até que uma bomba seja escolhida.\n\n");

        }

    } while (op != 0);
    printf("Você saiu!");
    return 0;
}