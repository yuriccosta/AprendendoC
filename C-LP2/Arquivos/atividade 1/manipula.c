#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Abre o arquivo
    FILE * fp;
    fp = fopen("../student_math_clean.csv", "r");
    
    // Verifica se ocorreu um erro na hora de abrir e encerra o programa se ocorreu
    if (fp == NULL){
        printf("Arquivo não foi aberto");
        return 0;
    }

    // Registro começa em negativo porque a primeira linha é sobre os títulos
    int cregistro = -1;
    
    char aux = 0;

    // Percorre o arquivo caracter a caracter até encontrar EOF
    while (aux!= EOF){
        aux = fgetc(fp);

        // Imprime os títulos da primeira linha
        if(cregistro == -1){
            if (aux == ','){
                printf("\n");
            } else{
                printf("%c", aux);
            }
        }
        // Incrementa o registro quando encontra uma quebra de linha
        if (aux == '\n') cregistro++;
    }

    printf("\nQuantidade de registros: %d\n", cregistro);

    // Fecha e avisa se deu algum problema na hora de fechar o arquivo
    if(fclose(fp)) printf("Arquivo não pode ser fechado\n");

    return 0;
}