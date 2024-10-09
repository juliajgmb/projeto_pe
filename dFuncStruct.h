#include <stdio.h>
#ifndef REGISTRO_CLIENTE_H
#define REGISTRO_CLIENTE_H

typedef enum{
	MASCULINO,
	FEMININO,
	INDEFINIDO
} tGenero;

typedef struct{
	int dia,mes,ano;
} tData;

typedef struct{
	char rua[50];
	char numero[10];
	char cidade[30];
	char estado[20];
	char cep[15];
} tEndereco;

typedef struct{
	int codigo;
	char nome[50];
	tGenero sexo;
	tData dataNascimento;
	tEndereco endereco;
	int numLoc;
	int brinquedosLoc;	
} tRegistroCliente;

tRegistroCliente RegistraCliente(void);
void LocarBrinquedo(tRegistroCliente *cliente);
void BrinquedosAlocadosClientes(tRegistroCliente clientes[], int clientesRegistrados);
void exibirclientes(tRegistroCliente clientes[],int ClientesRegistrados);
#endif
