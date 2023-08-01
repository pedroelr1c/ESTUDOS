#include <stdio.h>
#include <stdlib.h>


int main(void){
	
//	FILE* fopen(cahr* nome_arquivo,char*modo);

FILE* fp;
fp=fopen("entrada.txt","wrt"); // w serve para criar arquivo r ler o arquivo e t é para arquivo de texto.
if(fp==NULL){
	printf("ARQUIVO NAO EXISTE");
	exit(1);
}else{
	printf("ARQUIVO ENCONTRADO!!");
}

/*
fclose(fp); // função para fechar o arquivo.
	return 0;
*/
if(!fclose(fp)){ // FECHAR ARQUIVO.
    printf("ARQUIVO FECHADO\n!");
}

}