#include <stdio.h>
#include <string.h>
#include "dFuncStruct.h"


void BrinquedosAlocadosClientes(tRegistroCliente clientes[], int clientesRegistrados) 
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
            printf("Brinquedos alocados: %d\n", clientes[i].numLoc);
            printf("Endereço: %s, %s, %s, %s, CEP: %s\n",
                   clientes[i].endereco.rua, clientes[i].endereco.numero,
                   clientes[i].endereco.cidade, clientes[i].endereco.estado,
                   clientes[i].endereco.cep);
            printf("\n");
            return;
        }
    }
}
