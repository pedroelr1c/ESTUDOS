#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct pessoa{
	
	char nome[40];
	int idade;
	int rg;
	float altura;
	
}pessoa;


int main(void){
	
	pessoa registro[3];//DANDO O TAMANHO DE UM VETOR
	
	
	for(int ind=0;ind<2;ind++){
	
		printf("DIGITE SEU NOME\n>> ");
		scanf(" %[^\n]",registro[ind].nome);
		printf("DIGITE SUA IDADE\n>> ");
		scanf("%d",&registro[ind].idade);
		printf("DIGITE SEU RG\n>> ");
		scanf("%d",&registro[ind].rg);
		printf("DIGITE SUA ALTURA\n");
		scanf("%f",&registro[ind].altura);
		
	}
	for(int c=0;c<2;c++){
	
	printf("NOME: %s\t",registro[c].nome);
	printf("IDADE: %d\t",registro[c].idade);
	printf("RG: %d\t",registro[c].rg);
	printf("ALTURA: %f\t",registro[c].altura);
	printf("\n");
	
	}
	return 0;
}
