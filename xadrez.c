#include <stdio.h>

/*
 * Declarar as funções aqui permite que a função main() as chame antes mesmo
 * de suas definições completas aparecerem no código.
 */
void moverTorreRecursivo(int passosRestantes);
void moverBispoRecursivo(int passosRestantes);
void moverRainhaRecursivo(int passosRestantes);

/*
 * FUNÇÃO PRINCIPAL (MAIN):
 * A execução do programa começa aqui.
 */
int main() {
    // Definição de Constantes para os Movimentos:
    // Valores fixos que definem quantos passos cada peça dará.
    const int passosTorre = 5;
    const int passosBispo = 5;
    const int passosRainha = 8;
    const int movimentosVerticaisCavalo = 2; // Movimento em "L": 2 para cima...
    const int movimentosHorizontaisCavalo = 1; // ...e 1 para a direita.

    // 1. Simulação da Torre com Recursividade:
    // Substitui o loop 'for' da primeira versão.
    printf("--- Movimento da Torre (Recursivo: 5 casas para a Direita) ---\n");
    moverTorreRecursivo(passosTorre);
    printf("\n");

    // Simulação do Bispo com Recursividade e Loops Aninhados:
    // Substitui o loop 'while' e atende ao requisito avançado.
    printf("--- Movimento do Bispo (Recursivo e Aninhado: 5 casas na Diagonal Cima-Direita) ---\n");
    moverBispoRecursivo(passosBispo);
    printf("\n");

    // Simulação da Rainha com Recursividade:
    // Substitui o loop 'do-while' da primeira versão.
    printf("--- Movimento da Rainha (Recursivo: 8 casas para a Esquerda) ---\n");
    moverRainhaRecursivo(passosRainha);
    printf("\n");

    // Simulação do Cavalo com Loops Complexos:
    // Implementa a lógica avançada com break e continue.
    printf("--- Movimento do Cavalo (Loops Complexos: 2 Cima, 1 Direita) ---\n");
    
    // O total de etapas no movimento em "L" é a soma dos movimentos.
    int totalEtapasCavalo = movimentosVerticaisCavalo + movimentosHorizontaisCavalo;

    // Loop externo itera por cada uma das 3 etapas do movimento completo.
    for (int etapa = 1; etapa <= totalEtapasCavalo; etapa++) {
        // Loop interno apenas para cumprir o requisito de aninhamento.
        for (int i = 0; i < 1; i++) {
            // Se a etapa atual for um dos movimentos verticais...
            if (etapa <= movimentosVerticaisCavalo) {
                printf("Cima\n");
                // 'continue' pula para a próxima iteração do loop externo (etapa++).
                continue;
            }
            // Senão (se já passou das etapas verticais), faz o movimento horizontal.
            printf("Direita\n");
        }

        // Se a etapa atual for a última, o movimento está completo.
        if (etapa == totalEtapasCavalo) {
            // 'break' encerra o loop 'for' principal.
            break;
        }
    }
    printf("\n");

    // Retorna 0 para indicar que o programa foi concluído com sucesso.
    return 0;
}

/*
 * DEFINIÇÃO DAS FUNÇÕES RECURSIVAS:
 * @brief Move a Torre para a direita de forma recursiva.
 * @param passosRestantes O número de casas que a torre ainda precisa mover.
 */
void moverTorreRecursivo(int passosRestantes) {
    // Caso Base: Se não há mais passos, a função para de se chamar.
    if (passosRestantes <= 0) {
        return;
    }
    // Ação: Imprime o movimento atual.
    printf("Direita\n");
    // Chamada Recursiva: Chama a si mesma com um passo a menos.
    moverTorreRecursivo(passosRestantes - 1);
}

/**
 * @brief Move o Bispo na diagonal de forma recursiva, usando loops aninhados.
 * @param passosRestantes O número de movimentos diagonais restantes.
 */
void moverBispoRecursivo(int passosRestantes) {
    // Caso Base: Condição de parada da recursão.
    if (passosRestantes <= 0) {
        return;
    }
    // Ação: Usa loops aninhados para imprimir o movimento.
    for (int v = 0; v < 1; v++) {      // Loop para a componente vertical do passo
        for (int h = 0; h < 1; h++) {  // Loop para a componente horizontal do passo
            printf("Cima, Direita\n");
        }
    }
    // Chamada Recursiva: Chama a função novamente com um passo a menos.
    moverBispoRecursivo(passosRestantes - 1);
}

/**
 * @brief Move a Rainha para a esquerda de forma recursiva.
 * @param passosRestantes O número de casas que a rainha ainda precisa mover.
 */
void moverRainhaRecursivo(int passosRestantes) {
    // Caso Base: Se não há mais passos, a recursão para.
    if (passosRestantes <= 0) {
        return;
    }
    // Ação: Imprime o movimento da rainha.
    printf("Esquerda\n");
    // Chamada Recursiva: A função se invoca com o problema reduzido.
    moverRainhaRecursivo(passosRestantes - 1);
}