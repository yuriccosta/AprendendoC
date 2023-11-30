#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Abre os três arquivos
    FILE * fp = fopen("../student_math_clean.csv", "r");
    FILE *masc = fopen("../masc.csv", "w");
    FILE *fem = fopen("../fem.csv", "w");
    
    // Verifica se ocorreu um erro na hora de abrir e encerra o programa se ocorreu
    if (fp == NULL || fem == NULL || masc == NULL){
        printf("Um dos arquivos não foi aberto");
        return 0;
    }
    

    char aux[500];
    //Pega a primeira linha dos títulos e coloca nos outros arquivos
    fgets(aux, 500, fp);
    fputs(aux, fem);
    fputs(aux, masc);

    int contf = 1;
    int contm = 1;

    // Percorre o arquivo principal até chegar no final: feof == 1
    while (!feof(fp)){
        fgets(aux, 500, fp);
        int contvirg = 0;
        // Percorre a linha que está na variavel aux, caracter a caracter
        for(int c = 0; aux[c] != '\0'; c++){
            // Verifica se encontramos uma vírgula e adiciona ao contador
            if (aux[c] == ',') contvirg++;
            // Quando chegamos em 2 vírgulas estamos no 3 campo, que é a coluna do sexo
            if (contvirg == 2){
                if(aux[c + 1] == 'F'){
                    fprintf(fem, "%d,%s", contf++, aux + c + 1);
                } else{
                    fprintf(masc, "%d,%s", contm++, aux + c + 1);
                }
                // Já encontramos o que queríamos não precisa mais percorrer
                break;
            }
        }
    }

    // Fecha e avisa se deu algum problema na hora de fechar os arquivos
    if(fclose(fp)) printf("Arquivo principal não foi fechado corretamente\n");
    if(fclose(fem)) printf("Arquivo fem não foi fechado corretamente\n");
    if(fclose(masc)) printf("Arquivo masc não foi fechado corretamente\n");
    return 0;
}