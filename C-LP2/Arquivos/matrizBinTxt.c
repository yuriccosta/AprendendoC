#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE * txt = fopen("matriz.txt", "w");
    FILE * bin = fopen("matriz.bin", "w");

    if (txt == NULL || bin == NULL){
        printf("Um dos arquivos não foi aberto");
        return 0;
    }

    double matriz[10][10];

    for (int c = 0; c < 10; c++){
        for (int d = 0; d < 10; d++){
            matriz[c][d] = 1.0 * rand() / RAND_MAX;
        }
    }

    for (int c = 0; c < 10; c++){
        fwrite(matriz[c], sizeof(double), 10, bin);
        for (int d = 0; d < 10; d++){
            fprintf(txt, "%lf\n", matriz[c][d]);
            // fwrite(&matriz[c][d], sizeof(double), 1, bin);
        }
    }

    if(fclose(txt)) printf("Arquivo txt não foi fechado corretamente\n");
    if(fclose(bin)) printf("Arquivo bin não foi fechado corretamente\n");

    txt = fopen("matriz.txt", "r");
    bin = fopen("matriz.bin", "r");

    char aux[30];
    double matriztxt[10][10];
    for (int c = 0; c < 10; c++){
        for (int d = 0; d < 10; d++){
            if(feof(txt)) break;
            fgets(aux, 30, txt);
            aux[strlen(aux) - 1] = '\0';
            matriztxt[c][d] = atof(aux);
        }
    }

    //double num;
    double matrizbin[10][10];

    fread(matrizbin, sizeof(double), 100, bin);
    for (int c = 0; c < 10; c++){
        fread(matrizbin[c], sizeof(double), 10, bin);
        /*for (int d = 0; d < 10; d++){
            fread(&num, sizeof(double),1 , bin);
            matrizbin[c][d] = num;
        }*/
    }

    for (int c = 0; c < 10; c++){
        for (int d = 0; d < 10; d++){
            
            printf("Diferença entre txt e binário: %lf\n", matriztxt[c][d] - matrizbin[c][d]);
        }
    }

    if(fclose(txt)) printf("Arquivo txt não foi fechado corretamente\n");
    if(fclose(bin)) printf("Arquivo bin não foi fechado corretamente\n");

    return 0;
}