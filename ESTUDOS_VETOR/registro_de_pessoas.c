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
	
	pessoa registro;
	
	printf("DIGITE SEU NOME\n>> ");
	scanf("%[^\n]",registro.nome);
	printf("DIGITE SUA IDADE\n>> ");
	scanf("%d",&registro.idade);
	printf("DIGITE SEU RG\n>> ");
	scanf("%d",&registro.rg);
	printf("DIGITE SUA ALTURA\n");
	scanf("%f",&registro.altura);
	
	printf("NOME: %s\t",registro.nome);
	printf("IDADE: %d\t",registro.idade);
	printf("RG: %d\t",registro.rg);
	printf("ALTURA: %f\t",registro.altura);
	
	return 0;
}
