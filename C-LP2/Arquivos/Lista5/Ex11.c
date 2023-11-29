#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

*/

int main(void){
    char nome[15];
    printf("Digite o nome do arquivo");
    scanf("%s", nome);
    getc(stdin);

    FILE * fp = fopen(nome, "w");

    // Verifica se ocorreu um erro na hora de abrir e encerra o programa se ocorreu
    if (fp == NULL){
        printf("Arquivo não foi aberto");
        return 0;
    }
    
    char frase[50];
    for (int c = 0; c < 5; c++){
        printf("Digite a frase:");
        fgets(frase, 50, stdin);
        for (int d = 0; frase[d] != '\n'; d++){
            frase[d] = toupper(frase[d]);
        }
        
        fputs(frase, fp);
    }
    // Fecha e avisa se deu algum problema na hora de fechar o arquivo
    if(fclose(fp)) printf("Arquivo não pode ser fechado\n");

    fp = fopen(nome, "r");
    
    while(!feof(fp)){
        printf("\nFrase:\n");
        fgets(frase, 50, fp);
        printf("%s", frase);

    }
    // Fecha e avisa se deu algum problema na hora de fechar o arquivo
    if(fclose(fp)) printf("Arquivo não pode ser fechado\n");
    return 0;
    
}

