#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{

    char nome[40];
    int idade;
    char senha[14];
    float saldo;
    int quant;

}Pessoas;


void menu();
void lista(Pessoas*cad);
void cadastro(Pessoas*cad);

int main(void) {

    Pessoas*cad[2];
    
    menu();

return 0;
}

void menu(){

    int opc;

    printf("====MENU====\n");
    printf("(1) cadastro\n");
    printf("(2) login\n");
    printf("(3) listar\n");
    scanf("%d",&opc);

    switch(opc){

        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            menu();
    }

}

void lista(Pessoas*cad){
int c;
    for(c=0;c<quant;c++){
        printf("CADASTRO c\nNOME: %s",c+1,Pessoa[c].nome);
        printf("\nR$%.2f\n",Pessoa[c].saldo);
        printf("=================================\n");
    }
}

void cadastro(Pessoas*cad){
    for
        printf("INFORME SEU NOME\n>> ",Pessoas[c])

}
