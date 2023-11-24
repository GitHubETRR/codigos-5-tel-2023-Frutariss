#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

void bienvenida();
float ingrese_mods();
float ingrese_angs();
float ingrese_frec();
void calculo_cap(float, float);
void calculo_ind(float, float);

int main(){
    bienvenida();
    float impM = ingrese_mods();
    float impA = ingrese_angs();
    float frec = ingrese_frec();

    float impX = impM *cos(impA*PI/180);
    float impY = impM *sin(impA*PI/180);
    float W = 2 *PI *frec;

    if(frec==0){
        printf("No tiene frecuencia\n");
    }else if(impY==0){
        printf("No tiene inductancia ni capacitancia\n");
    }else if(impY<0){
        calculo_cap(W, impY);
    }else{
        calculo_ind(W, impY);
    }

    if(impX==0){
        printf("No tiene resistencia");
    }else{
        printf("Su resistencia es de %f ohms\n", impX);
    }
}

void bienvenida(){
    printf("...\n");
}

float ingrese_mods(){
    float modT;
    float modI;

    printf("ingrese los modulos de la tension y la corriente en ese mismo orden\n");
    scanf(" %f %f", &modT, &modI);

    float impM = modT / modI;

    return impM;
}

float ingrese_angs(){
    float angT;
    float angI;

    printf("ingrese los angulos de la tension y la corriente en ese mismo orden\n");
    scanf(" %f %f", &angT, &angI);

    float impA = angT - angI;

    return impA;
}

float ingrese_frec(){
    float frec;

    printf("ingrese la frecuencia\n");
    scanf(" %f", &frec);

    return frec;
}

void calculo_cap(float W, float impY){
    float cap = 1/(W-impY*-1);

    printf("La capacitancia es de %f F\n", cap);
}

void calculo_ind(float W, float impY){
    float ind = impY/W;

    printf("La inductancia es de %f Henz\n", ind);
}