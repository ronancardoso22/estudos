#include "mc.h"


/*funcao procura a marca com codigo 'codmarca' e retorna o endereco
 do no onde a marca foi encontrada. */
tipomarca* buscarMarca(tipomarca* M, char *s)
{
    tipomarca *p;
    
    p = M;
    while(p != NULL && strcmp(p->nome, s) !=0)
    {
        p = p->prox;
    }
    return p;
}

/*funcao insere uma nova marca na lista*/
void inserirMarca(tipomarca*& M, int codmarca, char *nomemarca)
{
  tipomarca *&M = (tipomarca*)malloc(sizeof(tipomarca));
    M->codmarca = codmarca;
    M->nome = *nomemarca;
    tipomarca *prox->M = *prox =NULL;

}


/*funcao imprime os CARROS*/
void listarCarro(tipocarro* l)
{
    while(l != NULL)
    {
        printf("%d %d\n", l->codcarro, l->codmarca);
        l = l->prox;
    }
}


/*funcao imprime as marcas*/
void listarMarca(tipomarca* l)
{
    while(l != NULL)
    {
        printf("%d %s\n", l->codmarca, l->nome);
        l = l->prox;
    }
}

void inserirCarro (tipocarro *&, int , int)
{

    
}