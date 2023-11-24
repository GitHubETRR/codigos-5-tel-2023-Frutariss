#include <stdio.h>

#define PI 3.14159265359

void bienvenida();
float ingrese_real();
float ingrese_img();
float ingrese_frec();
void calculo_cap(float, float);
void calculo_ind(float, float);
void resultados(float);

int main(){
    bienvenida();
    float real = ingrese_real();
    float img = ingrese_img();
    float frec = ingrese_frec();
  
    float W = 2*PI*frec;

    if(frec==0){
        printf("No tiene frecuencia\n");
    }else if(img<0){
        calculo_cap(W,img);
    }else if(img>0){
        calculo_ind(W,img);
    }else{
        printf("No tiene inductancia ni capacitancia\n");
    }
    resultados(real);
}

void bienvenida(){
    printf("Pasaje de binomica a polar\n");
}

float ingrese_real(){
    float real;
    
    printf("Ingrese el numero real\n");
    scanf("%f",&real);
    
    return real;
}

float ingrese_img(){
    float img;
    
    printf("Ingrese el numero imaginario\n");
    scanf("%f",&img);
    
    return img;
}

float ingrese_frec(){
    float frec;
    
    printf("Ingrese la frecuencia\n");
    scanf("%f",&frec);
    
    return frec;
}

void calculo_cap(float W,float img){
    float cap = 1/(W*img*-1);
    
    printf("La capacitancia es: %f\n", cap);
}

void calculo_ind(float W, float img){
    float ind = W*img;
    
    printf("La inductancia es: %f\n", ind);
}

void resultados(float real){
    printf("La resistencia es: %f\n", real);
}