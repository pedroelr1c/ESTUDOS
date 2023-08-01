#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE*fp;
    char str[100];

    fp=fopen("arquivo.txt");
    if(fp==NULL){
        printf("ARQUIVO NAO ENCONTRADO\n");
        return 1;
    }

    fscanf(fp,%s,srt);
    printf("%s",str);
    fclose(fp);

    return 0;
}