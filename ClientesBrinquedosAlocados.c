#include <stdio.h>
#include <string.h>
#include "dFuncStruct.h"


void BrinquedosAlocadosClientes(tRegistroCliente clientes[], int clientesRegistrados) 
{
	int i;
	int sinalizador = 0;
	// Iterar sobre todos os clientes
   for (i = 0; i < clientesRegistrados; i++)
   {
        // Verificar se o cliente possui brinquedos alocados
        if (clientes[i].numLoc > 0) {
        	sinalizador += 1;
            // Exibir informações do cliente
			printf("\n\t~ CLIENTES QUE POSSUEM LOCAÇÕES ~\n");
            printf("\nCliente: %s", clientes[i].nome);
            printf("Código: %d\n", clientes[i].codigo);
            printf("Brinquedos alocados: %d\n", clientes[i].numLoc);
            printf("Endereço: %s", clientes[i].endereco.rua);
            printf("Numero da Casa ou Apartamento: %s", clientes[i].endereco.numero);
            printf("Cidade: %s", clientes[i].endereco.cidade);
            printf("Estado: %s", clientes[i].endereco.estado);
            printf("CEP: %s", clientes[i].endereco.cep);
            printf("\n");
        }
    }
    if(sinalizador == 0)
    	printf("\n\t ~ NENHUM CLIENTE POSSUI LOCAÇÕES ~\n");
}
