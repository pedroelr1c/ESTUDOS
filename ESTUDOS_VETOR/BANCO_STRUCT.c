#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct cont_bank{
	
	char nome[40];
	float saldo;
	int num_cont;
	int senha;
	int agencia;
	
}cont_bank;


int main(void){
	
	cont_bank registro[5];
	
	
	for(int ind=0;ind<5;ind++){
	
		printf("DIGITE SEU NOME\n>> ");
		scanf(" %[^\n]",registro[ind].nome);
		printf("DIGITE SUA SENHA\n>> ");
		scanf("%d",&registro[ind].senha);
		printf("DIGITE O NUMERO DA CONTA\n>> ");
		scanf("%d",&registro[ind].num_cont);
		printf("DIGITE SEU SALDO\n>> ");
		scanf("%f",&registro[ind].saldo);
		printf("DIGITE SUA AGENCIA\n");
		scanf("%d",&registro[ind].agencia);
		
	}
	for(int c=0;c<5;c++){
	
	printf("NOME: %s\n",registro[c].nome);
	printf("SENHA: %d\t",registro[c].senha);
	printf("NUMERO DA CONTA: %d\t",registro[c].num_cont);
	printf("SALDO: %f\t",registro[c].saldo);
	printf("AGENCIA: %d",registro[c].agencia);
	printf("\n");
	
	}
	return 0;
}
