#include "dFuncStruct.h"
#include<stdio.h>

void ExibirClientes(tRegistroCliente clientes[],int clientesRegistrados)
{
	int i= 0;
	
	printf("\n\t~ CLIENTES CADASTRADOS ~\n");
	
	for (i; i < clientesRegistrados; i++){
		printf("\nCodigo do Cliente: %d\n",clientes[i].codigo);
		printf("Nome: %s",clientes[i].nome);
		printf("Data de nascimento: %d/%d/%d\n",clientes[i].dataNascimento.dia,clientes[i].dataNascimento.mes,clientes[i].dataNascimento.ano);
		printf("CEP: %s",clientes[i].endereco.cep);
		printf("Número de locações totais: %d\n",clientes[i].brinquedosLoc);
		printf("Brinquedos alocados: %d\n",clientes[i].numLoc);
		printf("\n");
	}
}
