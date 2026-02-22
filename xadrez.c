#include <stdio.h>

int main() {
    
    // Declarando variaveis para o número de casas que cada peça irá mover
    int i; // Variável para controlar os loops
    int casas_torre = 5;      // Quantidade de casas que a Torre irá mover
    int casas_rainha = 8;     // Quantidade de casas que a Rainha irá mover
    int casas_bispo = 5;      // Quantidade de casas que o Bispo irá mover
                      
    
 
    // MOVIMENTO DA TORRE
    printf("\n*** MOVIMENTO DA TORRE ***\n");
    printf("Movendo 5 casas para a FRENTE:\n");
    
    // __________________Utilizando for_________________
    for(i = 1; i <= casas_torre; i++) {
        printf(" %d: Frente\n", i);
    }
    printf("Torre moveu %d casas para a frente!\n\n", casas_torre);
    
   
    //MOVIMENTO DO BISPO
    printf("*** MOVIMENTO DO BISPO ***\n");
    printf("Movendo 5 casas na diagonal (CIMA e DIREITA):\n");
    
    //________________ Utilizando while_________________
    i = 1;  // Reinicializando o contador
    while(i <= casas_bispo) {
        printf(" %d: Cima, Direita\n", i);
        i++;  // Incrementa o contador
    }
    printf("Bispo moveu %d casas na diagonal superior direita!\n\n", casas_bispo);
    
  
    //MOVIMENTO DA RAINHA
    printf("*** MOVIMENTO DA RAINHA ***\n");
    printf("Movendo 8 casas para a ESQUERDA:\n");
    
    // ___________________Utilizando do while_____________________
    i = 1;  // Reinicializando o contador
    do {
        printf(" %d: Esquerda\n", i);
        i++;  // Incrementa o contador
    } while(i <= casas_rainha);
    printf("Rainha moveu %d casas para a esquerda!\n\n", casas_rainha);
    
    return 0;
}