#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE * bin = fopen("../arquivoBinario.dat", "rb");
    FILE * txt = fopen("arquivoTxt.dat", "w");

    int aux;
    while (1){
        fread(&aux, sizeof(int), 1, bin);
        if (feof(bin)) break;
        fprintf(txt, "%d\n", aux);
    }

    fclose(bin);
    fclose(txt);

    return 0;
}