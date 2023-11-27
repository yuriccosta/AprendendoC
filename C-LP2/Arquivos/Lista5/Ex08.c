#include <stdio.h>
#include <stdlib.h>

/*

*/

int main(void){
    FILE * fp = fopen("alunos_crip.txt", "r");
    FILE * descrip = fopen("alunos_descrip.txt", "w");

    // Verifica se ocorreu um erro na hora de abrir e encerra o programa se ocorreu
    if (fp == NULL){
        printf("Arquivo não foi aberto");
        return 0;
    }

    int c = 1;
    while(1){
        char ch;
        ch = fgetc(fp);
        if (ch == EOF) {
            break;
        }
        ch = ch - c;
        fputc(ch, descrip);
        c++;
    }


    // Fecha e avisa se deu algum problema na hora de fechar o arquivo
    if(fclose(fp)) printf("Arquivo não pode ser fechado\n");

    
    return 0;
}

