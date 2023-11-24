#include <stdio.h>
#include <stdint.h>

#define str_max 100

unsigned char str1[str_max]={"peron"};
unsigned char str2[str_max]={"peron"};

int comp_str(); 

int main(void){
    uint8_t res = comp_str();

    if (0 == res){
        printf("Los strings son iguales");
        printf("\n %d", res);
    }else{
        printf("Los strings son distintos");
        printf("\n %d", res);
    }
}

int comp_str(){
    uint8_t res = 0;
    for (int i = 0;i<str_max;i++){
        if (str1[i]!=str2[i]){
            res = 1;
            return res;
        }
    }
}