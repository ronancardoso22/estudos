#include <stdio.h>

#define MAX 50

void calcula_min_max (float vetor[MAX] , int n, int &minimo, int &maximo);


int main(){

float vetormain [MAX];
int n;
int i, indicemin, indicemax ;
float notao,notinha,difnota;


printf(" Escreva o numero de notas a ser lançadas com valor máximo de 50\n");

scanf("%d",&n);
printf(" hora de lançar as notas!\n");
i = 0;
while (i<n){
    scanf("%f",&vetormain[i]);
}

calcula_min_max(vetormain,n,indicemin,indicemax);

notao = vetormain[indicemax];

notinha = vetormain[indicemin];

difnota = notao - notinha;

printf("esta e a maior nota %f  esta e a menor nota %f e essa e a diferenca entre elas %f\n",notao,notinha,difnota);


    return 0;
}





void calcula_min_max (float vetor[MAX] , int n, int &minimo, int &maximo){

minimo = vetor[0];

    for(int i = 1; i < n ; i++){

if(vetor[i]<minimo){
    minimo = vetor[i];
} 
    }

maximo = vetor[0];
    for(int i = 1; i < n ; i++){

if(vetor[i]>maximo){
    maximo = vetor[i];
} 
    }
}