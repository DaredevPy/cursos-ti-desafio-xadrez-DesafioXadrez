#include <stdio.h>

// Função recursiva para o movimento da TORRE
void mover_torre_recursivo(int casas, int passo_atual) {
    // Caso base: se já moveu todas as casas, para a recursão
    if(passo_atual > casas) {
        return;
    }
    
    // Movimento atual
    printf(" %d: Frente\n", passo_atual);
    
    // Chamada recursiva para o próximo passo
    mover_torre_recursivo(casas, passo_atual + 1);
}

// Função recursiva para o movimento do BISPO
void mover_bispo_recursivo(int casas, int passo_atual) {
    // Caso base: se já moveu todas as casas, para a recursão
    if(passo_atual > casas) {
        return;
    }
    
    // Movimento atual
    printf(" %d: Cima, Direita\n", passo_atual);
    
    // Chamada recursiva para o próximo passo
    mover_bispo_recursivo(casas, passo_atual + 1);
}

// Função recursiva para o movimento da RAINHA
void mover_rainha_recursivo(int casas, int passo_atual) {
    // Caso base: se já moveu todas as casas, para a recursão
    if(passo_atual > casas) {
        return;
    }
    
    // Movimento atual
    printf(" %d: Esquerda\n", passo_atual);
    
    // Chamada recursiva para o próximo passo
    mover_rainha_recursivo(casas, passo_atual + 1);
}

// Função do cavalo (permanece igual, com loops aninhados)
void mover_cavalo_simples() {
    printf("\n=== MOVIMENTO SIMPLES ===\n");
    
    // Movimento para CIMA com CONTINUE
    printf("\nCIMA:\n");
    for(int passo = 1; passo <= 3; passo++) {
        
        if(passo == 2) {
            continue;  // Pula o passo 2 (demonstração)
        }
        
        if(passo <= 3) {
            printf("  Passo %d: CIMA\n", passo);
        }
        
        if(passo == 3) {
            break;  // Para após 2 passos (1 e 3)
        }
    }
    
    // Movimento para DIREITA com BREAK
    printf("\nDIREITA:\n");
    for(int passo = 1; passo <= 3; passo++) {
        
        printf("  Passo %d: DIREITA\n", passo);
        
        if(passo == 1) {
            break;  // Para após 1 passo
        }
    }
    
    printf("\n Movimento concluído!\n");
}

int main() {
    
    // Declarando variaveis para o número de casas que cada peça irá mover
    
    int casas_torre = 5;      // Quantidade de casas que a Torre irá mover
    int casas_rainha = 8;     // Quantidade de casas que a Rainha irá mover
    int casas_bispo = 5;      // Quantidade de casas que o Bispo irá mover
                      
    
    // MOVIMENTO DA TORRE (VERSÃO RECURSIVA)
    printf("\n*** MOVIMENTO DA TORRE (RECURSIVO) ***\n");
    printf("Movendo 5 casas para a FRENTE:\n");
    
    // Chamando a função recursiva
    mover_torre_recursivo(casas_torre, 1);
    printf("Torre moveu %d casas para a frente!\n\n", casas_torre);
    
   
    // MOVIMENTO DO BISPO (VERSÃO RECURSIVA)
    printf("*** MOVIMENTO DO BISPO (RECURSIVO) ***\n");
    printf("Movendo 5 casas na diagonal (CIMA e DIREITA):\n");
    
    // Chamando a função recursiva
    mover_bispo_recursivo(casas_bispo, 1);
    printf("Bispo moveu %d casas na diagonal superior direita!\n\n", casas_bispo);
    
  
    // MOVIMENTO DA RAINHA (VERSÃO RECURSIVA)
    printf("*** MOVIMENTO DA RAINHA (RECURSIVO) ***\n");
    printf("Movendo 8 casas para a ESQUERDA:\n");
    
    // Chamando a função recursiva
    mover_rainha_recursivo(casas_rainha, 1);
    printf("Rainha moveu %d casas para a esquerda!\n\n", casas_rainha);
    
    // MOVIMENTO DO CAVALO
    printf("*** MOVIMENTO DO CAVALO ***\n");
    mover_cavalo_simples();
   
    return 0;
}