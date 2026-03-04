#include <stdio.h>

// Função recursiva para TORRE com DECREMENTO (versão detalhada)
void torre_com_decremento(int casas) {
    // Caso base: quando não há mais casas para mover
    if(casas == 0) {
        printf("  (Fim da recursão - caso base atingido)\n");
        return;
    }
    
    printf("  Chamada recursiva com casas = %d\n", casas);
    
    // Chamada recursiva DECREMENTANDO o contador
    torre_com_decremento(casas - 1);
    
    // Ação executada APÓS o retorno da recursão
    printf("  → Passo %d: Frente (voltando da recursão)\n", casas);
}

// Função recursiva para BISPO com DECREMENTO
void bispo_com_decremento(int casas) {
    if(casas == 0) return;
    
    bispo_com_decremento(casas - 1);  // DECREMENTO
    
    printf(" %d: Cima, Direita\n", casas);  // Imprime na ordem crescente
}

// Função recursiva para RAINHA com DECREMENTO
void rainha_com_decremento(int casas) {
    if(casas == 0) return;
    
    rainha_com_decremento(casas - 1);  // DECREMENTO
    
    printf(" %d: Esquerda\n", casas);  // Imprime na ordem crescente
}

// Função do cavalo
void mover_cavalo_simples() {
    printf("\n=== MOVIMENTO SIMPLES ===\n");
    
    printf("\nCIMA:\n");
    for(int passo = 1; passo <= 3; passo++) {
        if(passo == 2) continue;
        if(passo <= 3) printf("  Passo %d: CIMA\n", passo);
        if(passo == 3) break;
    }
    
    printf("\nDIREITA:\n");
    for(int passo = 1; passo <= 3; passo++) {
        printf("  Passo %d: DIREITA\n", passo);
        if(passo == 1) break;
    }
    
    printf("\n Movimento concluído!\n");
}

int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    
    
    
    return 0;
}