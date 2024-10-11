#include "dFuncStruct.h"

tRegistroCliente RegistraCliente(void){
	
	tRegistroCliente novoCliente;
	
	tGenero genero;
	char cGenero;
	
	printf("\nInforme o código do cliente: ");
	scanf("%d",&novoCliente.codigo);
	
	getchar();
	
	printf("Informe o nome de cliente: ");
	fgets(novoCliente.nome,50,stdin);
	
	printf("Informe o gênero do cliente(M ou F): ");
	scanf("%c",&cGenero);
	
	if(cGenero == 'M')
		genero = MASCULINO;
	else if(cGenero == 'F')
		genero = FEMININO;
	else
		genero = INDEFINIDO;
	
	novoCliente.sexo = genero;
		
	printf("Informe o dia de nascimento do cliente: ");
	scanf("%d",&novoCliente.dataNascimento.dia);
	
	printf("Informe o mês de nascimento do cliente: ");
	scanf("%d",&novoCliente.dataNascimento.mes);
	
	printf("Informe o ano de nascimento do cliente: ");
	scanf("%d",&novoCliente.dataNascimento.ano);
	
	getchar();
	
	printf("Informe a rua em que o cliente mora: ");
	fgets(novoCliente.endereco.rua,50,stdin);
	
	printf("Informe o número da casa ou apartamento em que o cliente mora: ");
	fgets(novoCliente.endereco.numero,5,stdin);
	
	printf("Informe a cidade em que o cliente mora: ");
	fgets(novoCliente.endereco.cidade,20,stdin);
	
	printf("Informe o estado em que o cliente mora: ");
	fgets(novoCliente.endereco.estado,20,stdin);
	
	printf("Informe o CEP do cliente: ");
	fgets(novoCliente.endereco.cep,15,stdin);
	
	novoCliente.numLoc = 0;
	novoCliente.brinquedosLoc = 0;
	
	printf("\n\t~ CLIENTE CADASTRADO COM SUCESSO ~\n");
	
	return novoCliente;
};
