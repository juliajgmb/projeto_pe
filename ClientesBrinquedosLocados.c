#include <stdio.h>
#include <string.h>
#include "dFuncStruct.h"


void BrinquedosLocadosClientes(tRegistroCliente clientes[], int clientesRegistrados) 
{
    // Iterar sobre todos os clientes
   for (int i = 0; i < clientesRegistrados; i++)
   {
   	
        // Verificar se o cliente possui brinquedos alocados
        if (clientes[i].numLoc > 0) {
            // Exibir informações do cliente
            printf("\n CLIENTES QUE POSSUE LOCAÇÕES:  ");
            printf("\nCliente: %s", clientes[i].nome);
            printf("Código: %d\n", clientes[i].codigo);
            printf("Brinquedos Locados: %d\n", clientes[i].numLoc);
            printf("\n");
            
        }
    }
}
