#include <stdio.h>
#include <stdint.h>

#define tam 10

unsigned int temp[tam]={};

void ing_temp();
void cal_prom();
void ordenar();
void may_diez();
void men_veinte();

int main(){
    ing_temp();
    cal_prom();
    ordenar();
    may_diez();
    men_veinte();
}

void ing_temp(){
    printf("Ingrese los valores de temperatura");
    for(uint8_t i=0;i<tam;i++){
        printf("\nValor Numero %d: ",i+1);
        scanf("%d", &temp[i]);
    }
}

void cal_prom(){
    float prom=0;

    for(uint8_t i=0;i<tam;i++){
        prom+=temp[i];
    }
    prom/=tam;
    printf("\nEl promedio es de: %f", prom);
    return;
}

void ordenar(){
    uint8_t tempo;
    for(uint8_t i=0;i<(tam-1);i++){
        for(uint8_t i=0;i<(tam-1);i++){
            if(temp[i+1]<temp[i]){
                tempo=temp[i];
                temp[i]=temp[i+1];
                temp[i+1]=tempo;
            }
        }
    }
    printf("\nEl orden de los valores de la temperatura de menor a mayor es: ");
    for(uint8_t i=0;i<tam;i++){
        printf("%d ", temp[i]);
    }
    printf("\nLa temperatura maxima es de: %d", temp[tam-1]);
    printf("\nLa temperatura minima es de: %d", temp[0]);
}

void may_diez(){
    uint8_t cant=0;
    for(uint8_t i=0;i<tam;i++){
        if(temp[i]>10){
            cant++;
        }
    }
    printf("\nHay %d valores de temperatura mayores a 10", cant);
}

void men_veinte(){
    uint8_t cant=0;
    for(uint8_t i=0;i<tam;i++){
        if(temp[i]<20){
            cant++;
        }
    }
    printf("\nHay %d valores de temperatura menores a 20", cant);
}



















