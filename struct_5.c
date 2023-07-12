#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct disciplina{
	
	int nome[40];
	float nota;
	
}Disciplina;

typedef struct aluno{
	
	Disciplina *disciplina;
	char nome[40];
	int matricula;
	
}Aluno;

Aluno *cadastra_aluno();

void imprimir(Aluno*registro);

int main(void){
	
	
	setlocale(LC_ALL,"portuguese");
	
	Aluno*registro=cadastra_aluno();
	
	imprimir(registro);
	
		
	
	
	free(registro->disciplina);
	free(registro);
	
	
	return 0;
}

Aluno * registro=cadastra_aluno(){

	Aluno * registro = (Aluno*)malloc(sizeof(Aluno));
	if(registro==NULL){
		printf("!!!ERRO NA ALOCAÇÃO DE MEMORIA!!!\n\n");
		exit(-1);
	}

	registro->disciplina = (Disciplina*)malloc(2*sizeof(Disciplina));
	
	printf("DIGITE O NOME DO ALUNO\n>> ");
	scanf(" %[^\n]", registro->nome);
	printf("DIGITE A MATRICULA DO ALUNO\n>> ");
	scanf("%d",&registro->matricula);
	printf("DIGITE A DICIPLINA\n>> ");
	scanf(" %[^\n]",registro->disciplina[0].nome);
	printf("DIGITE A DICIPLINA\n>> ");
	scanf(" %[^\n]",registro->disciplina[1].nome);
	printf("DIGITE A NOTA DA MATRICULA\n>> ");
	scanf("%f",&registro->disciplina->nota);
	
	
	system("cls");
	

return registro;
}

void imprimir(Aluno*registro){
	
	printf("DADOS DO ALUNO |  %s  | \n",registro->nome);
	printf("\nMATRICULA: %d\nDICIPLINAS: %s | %s\nNOTA: %.2f",registro->matricula,registro->disciplina[0].nome,registro->disciplina[1].nome,registro->disciplina->nota);
	
}
