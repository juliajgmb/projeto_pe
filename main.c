#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include "dFuncStruct.h"

int main()
{
	setlocale(LC_ALL, "Portuguese");
	tRegistroCliente clientes[10];
	int clientesRegistrados = 0;
	int menu;
	
	while(1){
	printf("\t~ MENU PIMPLAY ~\n");
	printf("\n  Cadastrar Novo Cliente (1)");
	printf("\n  Clientes Cadastrados (2)");
	printf("\n  Loca��o de Brinquedos (3)");
	printf("\n  Devolu��o de Brinquedos (4)");
	printf("\n  Loca��es Atuais (5)");
	printf("\n  Sair (6)");
	
	printf("\n\nInforme qual fun��o deseja utilizar: ");
	scanf("%d",&menu);
	
	if(menu == 1){
		clientesRegistrados += 1;
		clientes[clientesRegistrados - 1] = RegistraCliente();
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
	else if(menu == 6)
		break;
	}
	return 0;
}
