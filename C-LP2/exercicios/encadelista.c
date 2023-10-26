#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct intlist{
    int val;
    struct intlist* prox;
} lista;

lista* geralista(int vet[], int n){
    lista *aux = (lista*) malloc(sizeof(lista));
    aux->val = vet[0];
    aux->prox = NULL;
    lista *first = aux;
    
    for (int c = 1; c < n; c++){
        aux->prox = (lista*) malloc(sizeof(lista));
        aux = aux->prox;
        aux->val = vet[c];
        aux->prox = NULL;
    }

    return first;

}

void printlista(lista* encad){

    while (encad != NULL){
        printf("%d -> ", encad->val);
        encad = encad->prox;
    }
}

 

lista *adicionanofinal(lista* encad, int x){
    lista *new = (lista*) malloc(sizeof(lista)), *aux = encad;
    new->val = x;
    new->prox = NULL;
    
    if (encad != NULL){
        while (encad->prox != NULL){
            encad = encad->prox;
        }
        encad->prox = new;
        return aux;
    }

    return new;
}

lista *removenofinal(lista* encad, int *x){
    lista *aux;

    if (encad == NULL){
        return NULL;
    } else if(encad->prox == NULL){
        *x = encad->val;
        free(encad);
        return NULL;
    }

    while(encad->prox != NULL){
        aux = encad;
        encad = encad->prox;
    }
    
    aux->prox = NULL;
    *x = encad->val;
    free(encad);

    return encad;
}

//consertar para adiconar exatamente no ícone e não um depois
lista *addbyindex(lista* encad,int val, int pos){
    lista *new = (lista*) malloc(sizeof(lista));
    if (encad == NULL){
        return new;
    }else if (encad != NULL){
        int c = 0;
        lista *aux = NULL, *var = encad;
        while ((c < pos) && (var->prox != NULL)){
            var = var->prox;
            aux = var->prox;
            c++;
        }
        lista *new = (lista*) malloc(sizeof(lista));
        new->val = val;
        new->prox = aux;
        var->prox = new;
        return encad;
    }
}


int main(void){
    int x[10];

    printf("Array:\n");
    for(int i = 0; i < 10; i++){
        x[i] = rand() % 50;
        printf("%d -> ", x[i]);
    }
    printf("\n\n");

    lista *preenchido = (lista*) malloc(sizeof(lista));
    lista *new = NULL;

    preenchido = geralista(x, 10);
    printf("Primeira lista:\n");
    printlista(preenchido);
    printf("\n");
    addbyindex(preenchido,10,3);
    printlista(preenchido);
    printf("\n");

    int *val = (int*) malloc(sizeof(int));
    
    new = adicionanofinal(new, 23);
    printf("\nSegunda lista:\n");
    printlista(new);
    printf("\n");
    //new = removenofinal(new, val);
    //printf("\nValor removido: %d\n\n", *val);
    //printf("Segunda lista depois de remover:\n");
    new = addbyindex(new, 10, 3);
    printlista(new);

}