#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//ciração de uma struct.
	
	typedef struct Aluno{
	
		char nome_aluno[40];
		int matricula;
		int idade;	
		
	}Aluno;
	
	int main(void){
	
		setlocale(LC_ALL,"Portuguese");
	
		/*
		char nome_aluno[100];
		int matricula;
		int idade;
		*/
	
	Aluno var_aluno; // criando a variavel aluno, e dando um nome a ela.
	
	printf("DIGITE SEU NOME\n>>> ");
	scanf(" %[^\n]", var_aluno.nome_aluno); //esse comando vai armazenar o nome digitado pelo usuario.
	
	
	printf("DIGITE SUA IDADE\n>>> "); 
	scanf("%d",&var_aluno.idade); // comando para armazenar a idade.
	
	printf("DIGITE O NÚMERO DA SUA MATRICULA\n>>> ");
	scanf("%d",&var_aluno.matricula); // comando para armazenar a matricula.
	
	printf("NOME DO ALUNO: %s\n",var_aluno.nome_aluno);
	printf("IDADE DO ALUNO: %d\n",var_aluno.idade);
	printf("MATRICULA DO ALUNO: %d\n",var_aluno.matricula);
	
		printf("TESTE DE COMANDOP SECRETO");
	
	return 0;
}
