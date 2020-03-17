//Modularizado
//Criar um TADA CONTENDO:
// NOME CHAR[50]
//IDADE INT
//RG CHAR[10]
//cpf CHAR[11]
//SALARIO real
//Carregar um vetor tamanho 10 com o TAD

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 10

typedef struct {
	char nome[50];
	int idade;
	char rg[10];
	char cpf[11];
	float salario;	
}Pessoas;

void carregaVetor(Pessoas* pessoa);
void escreveVetor(Pessoas* pessoa);
Pessoas* criaPessoa();

int main(){
	Pessoas *pessoa;
	
	pessoa = criaPessoa();

	if(pessoa == NULL){
		printf("Memoria nao alocada!");
	}
	
	carregaVetor(pessoa);
	escreveVetor(pessoa);
	
	free(pessoa);
}

Pessoas* criaPessoa(){
	Pessoas* pessoa;
	
	pessoa = (Pessoas*) malloc (TAM * sizeof(Pessoas));
	
	return pessoa;
}

void carregaVetor(Pessoas* pessoa){
	int i;
	for (i=0; i < TAM;i++){
		printf("Digite o nome para a pessoa %i : ",i+1);
		scanf("%s", &pessoa[i].nome);
		
		printf("Digite a idade para a pessoa %i : ",i+1);
		scanf("%i", &pessoa[i].idade);
		
		printf("Digite o RG da pessoa %i : ",i+1);
		scanf("%s", &pessoa[i].rg);
		
		printf("Digite o cpf da pessoa %i : ",i+1);
		scanf("%s", &pessoa[i].cpf);
		
		printf("Digite o salario da pessoa %i : ",i+1);
		scanf("%f", &pessoa[i].salario);
	}
	printf("\n\n");
}

void escreveVetor(Pessoas* pessoa){
	int i;
	for(i=0; i< TAM;i++){
		printf("O nome da pessoa %i e:%s\n",i+1, pessoa[i].nome);
		printf("A idade da pessoa %i e: %i\n",i+1, pessoa[i].idade);
		printf("O RG da pessoa %i e: %s\n",i+1, pessoa[i].rg);
		printf("O cpf da pessoa %i e:%s\n",i+1, pessoa[i].cpf);
		printf("O salario da pessoa %i e: %.2f\n\n",i+1, pessoa[i].salario);	
	}
}
