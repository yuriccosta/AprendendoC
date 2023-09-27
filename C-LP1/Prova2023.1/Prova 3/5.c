#include <stdio.h>
typedef struct {
    int horas;
    int minutos;
} Thora;
int main(void){
    Thora hora[6];
    Thora horariofinal;
    horariofinal.horas = 22;
    horariofinal.minutos = 00;
    printf("Entre com a hora de início: ");
    scanf("%d", &hora[0].horas);
    printf("Entre com os minutos: ");
    scanf("%d", &hora[0].minutos);
    //Letra a
    for (int c = 0; c < 5; c++){
        int aux = hora[c].minutos + 50;
        hora[c + 1].minutos = aux % 60;
        if (aux /60 + hora[c].horas > 23){
            hora[c + 1].horas = aux / 60 + hora[c].horas - 24;
        }
        else{
            hora[c + 1].horas = aux / 60 + hora[c].horas; 
        }
        
    }
    printf("Os eventos acontecem nos seguintes horários:\n");
    for (int i = 0; i < 6; i++){
        // Letra b
        if (hora[i].horas - hora[0].horas < 0){
            printf("%d:%d do dia seguinte\n", hora[i].horas, hora[i].minutos);
        } else{
            printf("%d:%d\n", hora[i].horas, hora[i].minutos);
        }
    }
    // Letra c
    int cont = 0;
    for (int k = 0; k < 6; k++){
        if (hora[k].horas > horariofinal.horas || (hora[k].horas == horariofinal.horas && hora[k].minutos > horariofinal.minutos)){
            cont++;
        } else if (hora[k].horas - hora[0].horas < 0){
            cont++;
        }
    }
    printf("Quantidade de eventos que passaram do horário: %d\n", cont);
    
    return 0;
}
