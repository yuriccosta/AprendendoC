#include <stdio.h>
#include <stdlib.h>

// Ainda não foi finalizado


int main(void){
    FILE *fp; // Criando ponteiro do tipo FILE

    fp = fopen("temperatura.txt", "r"); 
    /*  "w" Cria um arquivo para escrita, se já existir ele apaga o anterior
        "r" Abre um arquivo para leitura, o arquivo deve existir antes
        "a" Abre um arquivo ja existente para escrita no final
        "w+" Cria um arquivo para escrita e leitura, se já existir ele apaga o anterior
        "r+" Abre um arquivo para leitura e gravação, o arquivo deve existir antes
        "a+" Abre um arquivo ja existente para escrita no final e leitura 
    */

    if (fp == NULL){
        printf("O arquivo não foi aberto\n");
        return 0;
    }

    // Para andar no arquivo até encontrar o dia do Mês
    char smes[3];
    char aux = fgetc(fp);
    while (aux != '\n'){
        aux = fgetc(fp);
    }
    fgets(smes, 3, fp);
    smes[2] = '\0';

    // Convertendo a string do mes para inteiro
    short int mes;
	mes = atoi(smes);

    //Percorrendo o arquivo
    aux = fgetc(fp);
    int mediamin = 0;
    int mediamax = 0;

    //
	for (int c = 0; c < mes; c++){
        while(aux != '\n'){
            int cont = 0;
            aux = fgetc(fp);
            if (aux == ' ') cont++;
            if (cont == 2){
                char min[5];
                fgets(min, 6, fp);
                min[4] = '\0';
                mediamin = mediamin + atof()
            }

        }


	}

    // fclose retorna 1 se acontecer algum erro na hora de fechar o arquivo
    if (fclose(fp)) printf("O arquivo não foi fechado corretamente");

    return 0;
}