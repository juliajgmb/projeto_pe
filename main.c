#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "dFuncStruct.h"

int main()
{
	setlocale(LC_ALL, "Portuguese");
	tRegistroCliente clientes[10];
	int clientesRegistrados = 0;
	int menu, i, retorno;
	
	while(1){
		printf("\t~ MENU PIMPLAY ~\n");
		printf("\n  Cadastrar Novo Cliente (1)");
		printf("\n  Clientes Cadastrados (2)");
		printf("\n  Locação de Brinquedos (3)");
		printf("\n  Devolução de Brinquedos (4)");
		printf("\n  Locações Atuais (5)");
		printf("\n  Sair (6)");
	
		printf("\n\nInforme qual função deseja utilizar: ");
		scanf("%d",&menu);
	
		if(menu == 1){
			clientesRegistrados += 1;
			clientes[clientesRegistrados - 1] = RegistraCliente();
			printf("\nDigite 0 para retornar ao menu: ");
			scanf("%d", &retorno);
			if(retorno == 0){
				printf("\n\nRetornando ao menu");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				system("cls");
			}
		}
		else if(menu == 2){
			ExibirClientes(clientes, clientesRegistrados);
			printf("\nDigite 0 para retornar ao menu: ");
			scanf("%d", &retorno);
			if(retorno == 0){
				printf("\n\nRetornando ao menu");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				system("cls");}
		}
		else if(menu == 3){
			int codigo;
	        printf("\nInforme o código do cliente: ");
	        scanf("%d", &codigo);
            for (i = 0; i < clientesRegistrados; i++) {
                if (clientes[i].codigo == codigo) {
                    LocarBrinquedo(&clientes[i]);
                    break;
                }}
            printf("\nDigite 0 para retornar ao menu: ");
			scanf("%d", &retorno);
			if(retorno == 0){
				printf("\n\nRetornando ao menu");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				system("cls");}
		}
		else if(menu == 4){
			DevolucaoBrinquedo(clientes, clientesRegistrados);
			printf("\nDigite 0 para retornar ao menu: ");
			scanf("%d", &retorno);
			if(retorno == 0){
				printf("\n\nRetornando ao menu");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				system("cls");}
				}
		else if(menu == 5)
		{
			BrinquedosAlocadosClientes(clientes, clientesRegistrados);
			printf("\nDigite 0 para retornar ao menu: ");
			scanf("%d", &retorno);
			if(retorno == 0){
				printf("\n\nRetornando ao menu");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				printf(".");
				sleep(1);
				system("cls");}
				}
		else if(menu == 6)
			break;
	}
		
	return 0;
}
