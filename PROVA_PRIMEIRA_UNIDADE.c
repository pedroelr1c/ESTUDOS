#include <stdio.h>
#include <stdio.h>

typedef struct professor{
	
	char nome[40];
	char disciplinas[15];
	int regime_tb;
	
}prof;


void registro(prof * c){
	
	printf("DIGITE O SEU NOME: ");
	scanf(" %[^\n]",c->nome);
	printf("INFORME A DISCIPLINAS ");
	scanf(" %[^\n]",c->disciplinas);
	printf("INFORMA O REGIME DE TRABALHO EM HORAS: ");
	scanf("%d",&c->regime_tb);
}

void imprimir(prof*c){
	
	printf("NOME: %s\nDISCIPLINA: %s\nREGIME DE TRABALHO (HORAS): %d",c->nome,c->disciplinas,c->regime_tb);
	
}

void alterar_regime(prof*c){
	
	printf("NOVO REGIME\n");
	scanf("%d",&c->regime_tb);
	
}

int main(void){
	
	
	prof c;	
	
	registro(&c);
	
	alterar_regime(&c);
	
	imprimir(&c);
	
	return 0;
}





