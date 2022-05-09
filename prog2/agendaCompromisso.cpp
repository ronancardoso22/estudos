#include <stdio.h>
struct data
{
    int dia;
    int mes;
    int ano;
}T_data;

struct compromisso
{
   char nome_compromisso[60];
    struct data diaCompromisso;
}T_compromisso;



void checarCompromisso(&T_compromisso, int m, int a)
{
    if(T_compromisso.mes == m && T_compromisso.ano == a)
    {
        return T_compromisso.nome_compromisso);
    }
}

int main(){

T_compromisso listaCompromissos[5];
int mes;
int ano;


for(int i = 0; i < 5 ; i++)
{
printf("registre o compromisso\n");
scanf(" %[^\n] ",listaCompromissos[i].nome_compromisso);
printf("agora a data do mesmo\n");
scanf("%d|%d|%d",&listaCompromissos[i].dia,&listaCompromissos[i].mes,&listaCompromissos[i].ano);
}

scanf("%d",&mes);
scanf("%d",&ano);

while(mes != 0 && mes < 13)
{
    for(int i=0; i < 5 ;i++)
    {
         printf("%s\n",checarCompromisso(listaCompromissos[i],mes,ano);
    }
   scanf("%d",&mes);
   
}

    return 0;
}


void checarCompromisso(&T_compromisso, int m, int a)
{
    if(T_compromisso.mes == m && T_compromisso.ano == a)
    {
        return T_compromisso.nome_compromisso);
    }
}