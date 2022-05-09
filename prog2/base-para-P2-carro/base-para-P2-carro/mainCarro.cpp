#include<stdio.h>





/*funcao main*/
int main()
{
    int op;
    
    
    
    do
    {
        printf("\n1 - Cadastrar marca");
        printf("\n2 - Cadastrar carro");
        printf("\n3 - Remover posição");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);
        
        if(op == 1)
        { 
            char *nomemarca;
            inserirMarca();
        }
        else if(op == 2)
        {
            
        }
        else if(op == 3)
        {
        
        }
        
    }while(op != 4);
    
    
    
    
    return 0;
}


