#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroSecreto, palpite, tentativas = 0;

    //Inicializa o gerador de números aleatórios
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1; // Número entre 1 e 100

    printf("Bem-vindo(a) ao jogo de adivinhacao! \n");
    printf("Tente adivinhar o numero secreto (entre 1 e 100). \n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numeroSecreto) {
            printf("Muito baixo! Tente novamente. \n");
        } else if (palpite > numeroSecreto) {
            printf("Muito alto! Tente novamente. \n");
        } else {
            printf("Parabens! Voce adivinhou o numero em %d tentativas! \n", tentativas);
        }
    } while (palpite != numeroSecreto);

return 0;
}