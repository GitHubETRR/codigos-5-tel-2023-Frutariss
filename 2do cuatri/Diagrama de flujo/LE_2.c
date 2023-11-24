#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

void bienvenida();
float ingrese_mod();
float ingrese_ang();
float calculo_real(float, float);
float calculo_img(float, float);
void resultados(float, float);

int main(){
    bienvenida();
    float mod = ingrese_mod();
    float ang = ingrese_ang();
    float real = calculo_real(mod,ang);
    float img = calculo_img(mod,ang);
    resultados(real,img);
}

void bienvenida(){
  printf("Pasaje de Polar a binomica\n");
}

float ingrese_mod(){
  float mod;
  
  printf("Ingrese el modulo de su funcion\n");
  scanf("%f",&mod);
  
  return mod;
}

float ingrese_ang(){
  float ang;
  
  printf("Ingrese el angulo de su funcion\n");
  scanf("%f",&ang);
  
  return ang;
}

float calculo_real(float mod,float ang){
  float real = cos(ang*PI/180)*mod;
  
  return real;
}

float calculo_img(float mod, float ang){
  float img = sin(ang*PI/180)*mod;
  
  return img;
}

void resultados(float real, float img){
  printf("Su funcion es:\n");   
  printf("%f +j %f\n", real, img);
  printf("Siendo el numero real %f\n", real);
  printf("Y el imaginario %f\n", img);
}