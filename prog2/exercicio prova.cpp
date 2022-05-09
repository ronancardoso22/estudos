#include<stdio.h>
#include <string.h>
#define MAX 100

struct tipoAluno
{
	char nome[21];
	int op1;
	int op2;

};

int main()
{
	tipoAluno vetor[MAX];	// vetor de alunos
	int n;     // qtde de alunos
	scanf("%d", &n);
	int i;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;


	for(i = 0; i < n; i++)
	{

		scanf(" %[^\n]", vetor[i].nome);


		scanf("%d", &vetor[i].op1);
		scanf("%d", &vetor[i].op2);

		if( 1 == vetor[i].op1 ){
            count1 = count1 +1;
		}
		else if(1 == vetor[i].op2){
            count1 = count1 +1;
		}

		if(2 == vetor[i].op1 ){
            count2 = count2 +1;
		}
		else if(2 == vetor[i].op2){
            count2 = count2 +1;
		}

		if(3 == vetor[i].op1 ){
            count3 = count3 +1;
		}
		else if(3 == vetor[i].op2){
            count3 = count3 +1;
		}

		if(4 == vetor[i].op1 ){
            count4 = count4 +1;
		}
		else if(4 == vetor[i].op2){
            count4 = count4 +1;
		}


	}
	if(count1 < count2 && count1 < count3 && count1 < count4){
        printf("1\n");
	}
	else if(count2 < count1 && count2 < count3 && count2 < count4){
        printf("2\n");
	}
	else if(count3 < count1 && count3 < count2 && count3 < count4){
        printf("3\n");
	}
	else if(count4 < count1 && count4 < count3 && count4 < count2){
        printf("4\n");
	}


	for(i = 0; i < n; i++){
    if (vetor[i].op1 == vetor[i].op2){
		printf("%s\n", vetor[i].nome);

	}


}
for(i = 0; i < n; i++){
    if (vetor[i].op1 > 4){
		printf("%s\n", vetor[i].nome);

	}


}
for(i = 0; i < n; i++){
    if (vetor[i].op1 < 0){
		printf("%s\n", vetor[i].nome);

	}


}
for(i = 0; i < n; i++){
    if (vetor[i].op2 > 4){
		printf("%s\n", vetor[i].nome);

	}


}
for(i = 0; i < n; i++){
    if (vetor[i].op2 < 0){
		printf("%s\n", vetor[i].nome);

	}


}
return 0;
}
