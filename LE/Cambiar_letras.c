#include <stdio.h>
#include <stdint.h>

#define tam 5
#define change 32

unsigned char str[tam]={};
char may_min[tam]={};

void pasar_may();
void pasar_min();

int main(void){
    printf("Ingresar palabra: ");
    gets(str);
    printf("Si quieres pasarla a mayuscula(M)\n");
    printf("Si quieres pasarla a minuscula(m)\n");
    gets(may_min);
    if(may_min[0] == 'M'){
        pasar_may();
    }else if (may_min[0] == 'm'){
        pasar_min();
    }
}

void pasar_may(){
    for(int i=0;i<(tam-1);i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i]-=change;
        }
    }
    printf("\n%s",str);
}

void pasar_min(){
    for(int i=0;i<(tam-1);i++){
        if (str[i]>='A' && str[i]<='Z'){
            str[i]+=change;
        }
    }
    printf("\n%s",str);
}