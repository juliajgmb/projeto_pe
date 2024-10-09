#include "dFuncStruct.h"
#include<stdio.h>

void exibirclientes(tRegistroCliente clientes[],int ClientesRegistrados)
{
	int i= 0;
	for (i;i<ClientesRegistrados;i++)
	{
	printf("Codigo do Cliente: %d \n",clientes[i].codigo);
	printf("Nome:%s\n",clientes[i].nome);
	printf("Data de nascimento: %d/%d/%d\n",clientes[i].dataNascimento.dia,clientes[i].dataNascimento.mes,clientes[i].dataNascimento.ano);
	printf("Cep: %s\n",clientes[i].endereco.cep);
	printf("Número de Locações: %d\n",clientes[i].numLoc);
	printf("Brinquedos Alugados: %d\n",clientes[i].brinquedosLoc);
	}
}
