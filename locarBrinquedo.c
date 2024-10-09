#include "dFuncStruct.h"
#include <stdio.h>

// Definindo uma constante para o n�mero m�ximo de brinquedos que um cliente pode locar
#define MAX_BRINQUEDOS 5

void LocarBrinquedo(tRegistroCliente *cliente) {
    int quantidade;

    // Verificar se o cliente j� locou brinquedos
    if (cliente->numLoc >= MAX_BRINQUEDOS) {
        printf("Cliente j� atingiu o n�mero m�ximo de loca��es!\n");
        return;
    }

    printf("Quantos brinquedos deseja locar? ");
    scanf("%d", &quantidade);

    // Verifica se a quantidade � v�lida
    if (quantidade < 1 || quantidade + cliente->numLoc > MAX_BRINQUEDOS ) {
        printf("Quantidade inv�lida! Voc� pode locar at� %d brinquedos.\n", MAX_BRINQUEDOS - cliente->numLoc);
        return;
    }

    // Atualiza o n�mero de loca��es
    cliente->numLoc += quantidade;
    printf("Loca��o realizada com sucesso! Total de brinquedos locados agora: %d\n", cliente->numLoc);
}

