#include <stdio.h>

int main(){
    
    float altura;
    int  sexo;
float peso;
int contador,i;
i=0;
contador = 100;
        while( i < contador ){

    printf("digite 1 caso seja homem e 2 caso seja mulher\n");

        scanf("%d",&sexo);

    printf(" digite agora sua altura\n");

        scanf("%f",&altura);

    if(sexo ==1){
peso = (72.7 * altura) - 58;

    } else 
    if(sexo == 2){
        peso = (62.1 *altura) -44.7;
    }
    printf(" seu peso ideal é %.2f\n",peso);
    
  i++;
                }
    return0;
}