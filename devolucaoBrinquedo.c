#include "dFuncStruct.h"

void DevolucaoBrinquedo(tRegistroCliente clientes[], int clientesRegistrados){
	int i,codigo,devolucao;
	
	printf("\nInforme o código do cliente que deseja realizar a devolução: ");
	scanf("%d",&codigo);
	
	for(i = 0; i < clientesRegistrados; i++){
		if(clientes[i].codigo == codigo){
			printf("\nAtualmente, o cliente possui %d brinquedos locados", clientes[i].numLoc);
			printf("\nQuantos brinquedos o cliente deseja devolver? ");
			scanf("%d",&devolucao);
			
			while(devolucao > clientes[i].numLoc){
				printf("\nO cliente está tentando devolver mais brinquedos do que a quantidade alugada!");
				printf("\nPor favor, digite um valor válido para a quantidade de devoluções: ");
				scanf("%d",&devolucao);
			}
			
			clientes[i].numLoc = clientes[i].numLoc - devolucao;
			printf("\n~ Devolução realizada com sucesso! Total de brinquedos locados agora: %d\n", clientes[i].numLoc);
		}
	}
}
