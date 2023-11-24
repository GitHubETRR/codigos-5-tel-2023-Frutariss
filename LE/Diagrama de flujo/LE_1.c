#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

void bienvenida();
float ingrese_real();
float ingrese_img();
float calculo_mod(float, float);
float calculo_ang(float, float);
void resultados(float, float);

int main(){
  bienvenida();
  float real = ingrese_real();
  float img = ingrese_img();
  float mod = calculo_mod(real,img);
  float ang = calculo_ang(real,img);
  resultados(mod,ang);
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

float calculo_mod(float real,float img){
  float mod = sqrt((real*real) + (img*img));
  
  return mod;
}

float calculo_ang(float real, float img){
  float ang = atan2(img, real)*180/PI;
  
  return ang;
}

void resultados(float mod, float ang){
  printf("Su funcion es:\n");
  printf("%f e^%f j\n", mod, ang);
  printf("Siendo el modulo %f\n", mod);
  printf("Y el angulo %f\n", ang);
}