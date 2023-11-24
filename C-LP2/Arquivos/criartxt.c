#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    FILE *fp; // Criando ponteiro do tipo FILE

    fp = fopen("temperatura.txt", "w"); 
    /*  "w" Cria um arquivo para escrita, se já existir ele apaga o anterior
        "r" Abre um arquivo para leitura, o arquivo deve existir antes
        "a" Abre um arquivo ja existente para escrita no final
        "w+" Cria um arquivo para escrita e leitura, se já existir ele apaga o anterior
        "r+" Abre um arquivo para leitura e gravação, o arquivo deve existir antes
        "a+" Abre um arquivo ja existente para escrita no final e leitura 
    */

    if (fp == NULL){
        printf("O arquivo não foi aberto");
        return 0;
    }

    short int mes = 1;
	float tempmax;
	float tempmin;
	fputs("Mes, Dia, Tminima, Tmaxima\n", fp);

    srand(time(NULL));
	for (int c = 0; c < 31; c++){
		tempmax = 30 + (rand() * 20.0) / RAND_MAX;
		tempmin = 20 + (rand() * 10.0) / RAND_MAX;
		char info[100] = {0};

        // sprintf cria uma string formatada e salva ela no array do primeiro parametro
		sprintf(info, "%d, %d, %.2f, %.2f\n", mes, c + 1, tempmin, tempmax);

        // fputs escreve uma string dentro do arquivo
		fputs(info, fp);
	}

    // fclose retorna 1 se acontecer algum erro na hora de fechar o arquivo
    if (fclose(fp)) printf("O arquivo não foi fechado corretamente");

    return 0;
}