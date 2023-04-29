#include <stdio.h>
#include <stdlib.h>

int main () {

char nome[100], sexo;

scanf("%s", nome);
scanf(" %c", &sexo);
if(sexo=='M'||sexo=='m'||sexo=='F'||sexo=='f'){

    if(sexo=='M'||sexo=='m'){
        printf("ssmo Sr. %s", nome);
    }else{
        printf("ssmo Sra. %s", nome);
    }

}else{
    printf("\n Sexo inválido");
}

system("pause");
return 0;



}