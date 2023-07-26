#include <stdio.h>
#include <stdlib.h>


int soma(int *vetorum,int *vetordois,int tam){
	
	int c;
	
	int *vetorsoma=(int*)malloc(tam*sizeof(int));
	if(vetorsoma==NULL){
		printf("ERRO DE MEMORIA!\n");
		exit(1);
	}
	
	for(c=0;c<tam;c++){
		vetorsoma[c]=vetorum[c]+vetordois[c];
	}
	
	printf("SOMA DOS VETOR UM E DOIS\n");
	for(c=0;c<tam;c++){
		printf("%3d",vetorsoma[c]);
	}
	
	return vetorsoma;
}


int main(void){
	
	int tam;
	printf("INFOME O TAMANHO DOS VETORES\n>> ");
	scanf("%d",&tam);
	
	int *vetorum =(int*)malloc(tam*sizeof(int));
	if(vetorum==NULL){
		printf("ERRO DE MEMORIA!\n");
		exit(1);
	}

	int *vetordois =(int*)malloc(tam*sizeof(int));
	if(vetordois==NULL){
		printf("ERRO DE MEMORIA!\n");
		exit(1);
	}
	
	int c;
	for(c=0;c<tam;c++){
		printf("DIGITE O ESPACO %d DO VETOR UM\n>> ",c+1);
		scanf("%d",&vetorum[c]);
	}
	
	for(c=0;c<tam;c++){
		printf("DIGITE O ESPACO %d DO VETOR DOIS\n>> ",c+1);
		scanf("%d",&vetordois[c]);
	}
	
	soma(vetorum,vetordois,tam);
	
	
	return 0;
}