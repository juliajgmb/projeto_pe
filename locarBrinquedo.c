#include "dFuncStruct.h"
#include <stdio.h>

// Definindo uma constante para o número máximo de brinquedos que um cliente pode locar
#define MAX_BRINQUEDOS 5

void LocarBrinquedo(tRegistroCliente *cliente) {
    int quantidade;

    // Verificar se o cliente já locou brinquedos
    if (cliente->numLoc >= MAX_BRINQUEDOS) {
        printf("\nCliente já atingiu o número máximo de locações!\n");
        return;
    }

    printf("\nQuantos brinquedos deseja locar? ");
    scanf("%d", &quantidade);

    // Verifica se a quantidade é válida
    if (quantidade < 1 || quantidade + cliente->numLoc > MAX_BRINQUEDOS ) {
        printf("\nQuantidade inválida! Você pode locar até %d brinquedos.\n", MAX_BRINQUEDOS - cliente->numLoc);
        return;
    }

    // Atualiza o número de locações
    cliente->numLoc += quantidade;
    cliente->brinquedosLoc += quantidade;
    printf("\n~ Locação realizada com sucesso! Total de brinquedos locados agora: %d\n", cliente->numLoc);
}

