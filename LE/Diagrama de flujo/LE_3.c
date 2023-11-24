#include <stdio.h>
#include <math.h>


#define PI 3.14159265359

void bienvenida();
float ingrese_reales();
float ingrese_imgs();
void resultado_binomica(float, float);
void resultado_polar(float, float);

int main(){
    int var;
    bienvenida();
    float reales = ingrese_reales();
    float imgs = ingrese_imgs();
    printf("Quiere ver el resultado en binomica(0) o polar(1)\n");
    scanf(" %d", &var);
    
    if(var==0){
        resultado_binomica(reales, imgs);
    }else if (var==1){
        resultado_polar(reales, imgs);
    }else{
        printf("ERROR");
    }
}

void bienvenida(){
  printf("Suma de numeros complejos\n");
}

float ingrese_reales(){
  float real1;
  float real2;

  printf("Ingrese los numeros reales\n");
  scanf(" %f %f", &real1, &real2);

  float reales = real1 + real2;

  return reales;
}

float ingrese_imgs(){
  float img1;
  float img2;

  printf("Ingrese los numeros imaginarios\n");
  scanf(" %f %f", &img1, &img2);

  float imgs = img1 + img2;

  return imgs;
}

void resultado_binomica(float reales, float imgs){
  printf("Su funcion es:\n");   
  printf("%f +j %f\n", reales, imgs);
  printf("Siendo el numero real %f\n", reales);
  printf("Y el imaginario %f\n", imgs);
}

void resultado_polar(float reales,float imgs){
  float mod = sqrt((reales*reales) + (imgs*imgs));
  float ang = atan2(imgs, reales)*(180/PI);

  printf("Su funcion es:\n");
  printf("%f e^%f j\n", mod, ang);
  printf("Siendo el modulo %f\n", mod);
  printf("Y el angulo %f\n", ang);
}