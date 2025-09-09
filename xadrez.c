#include <stdio.h>

int main() {
    
    // Define o número de casas que cada peça irá se mover.
    const int casasMovimentoTorre = 5;
    const int casasMovimentoBispo = 5;
    const int casasMovimentoRainha = 8;

    // Simulação do Movimento da Torre:
    // A Torre move-se 5 casas para a direita.
    // Usamos um laço 'for' pois o número de repetições é conhecido.
    printf("--- Movimento da Torre (5 casas para a Direita) ---\n");
    for (int i = 0; i < casasMovimentoTorre; i++) {
        // Imprimindo a direção do movimento a cada passo.
        printf("Direita\n");
    }
    printf("\n"); 

    // Simulação do Movimento do Bispo:
    // O Bispo move-se 5 casas na diagonal (Cima, Direita).
    // Usamos um laço 'while' para demonstrar outra forma de controle.
    printf("--- Movimento do Bispo (5 casas na Diagonal Cima-Direita) ---\n");
    int contadorBispo = 0; // Variável de controle para o laço while.
    while (contadorBispo < casasMovimentoBispo) {
        // Imprimindo a combinação de direções para o movimento diagonal.
        printf("Cima, Direita\n");
        contadorBispo++; // Incrementa o contador para evitar um laço infinito.
    }
    printf("\n"); 

    // Simulação do Movimento da Rainha:
    // A Rainha move-se 8 casas para a esquerda.
    // Usei um laço 'do-while', que garante a execução de pelo menos
    // uma iteração antes de verificar a condição.
    printf("--- Movimento da Rainha (8 casas para a Esquerda) ---\n");
    int contadorRainha = 0; // Variável de controle para o laço do-while.
    do {
        // Imprimindo a direção do movimento:
        printf("Esquerda\n");
        contadorRainha++; // Incrementa o contador.
    } while (contadorRainha < casasMovimentoRainha);
    printf("\n"); 

    return 0;
}