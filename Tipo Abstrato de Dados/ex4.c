/*4. Ler do teclado 12 números inteiros e armazená-los em um vetor N. Em
seguida, copiar os elementos pares divisíveis por 3 para o vetor X e os
ímpares divisíveis por 5 para o vetor Y.*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 12

typedef struct{
    int* n;
    int* x;
    int* y;
}Vetores;

Vetores* criaVetor();
int* criaN();
int* criaX();
int* criaY();
void carregaVetor(Vetores*);
void escreveVetor(Vetores*);
int main(){
    Vetores* vet;

    vet = criaVetor();
    if(vet == NULL){
        printf("Memoria não alocada");
    }
    vet->n = criaN();
    vet->x = criaX();
    vet->y = criaY();

    carregaVetor(vet);
    escreveVetor(vet);

    free(vet);
    
}

Vetores* criaVetor(){
    Vetores* n;

    n = (Vetores*) malloc(sizeof(Vetores*));

    

    return n;
}

int* criaN(){
	int* n;

	n = (int*) malloc(TAM * sizeof(int));

	return n;
}

int* criaX(){
	int* x;

	x = (int*) malloc(TAM * sizeof(int));

	return x;
}

int* criaY(){
	int* y;

	y = (int*) malloc(TAM * sizeof(int));

	return y;
}

void carregaVetor(Vetores* vet){
    for(int x = 0; x < TAM; x++){
		printf("Escreva o valor para a posicao[%d]: ",x+1);
		scanf("%d", &vet->n[x]);

		if(vet->n[x] % 3 == 0 && vet->n[x] % 2 == 0){
            vet->x[x] = vet->n[x];
        }
		else{
			vet->x[x] = 0;
        }
		if(vet->n[x] % 2 != 0 && vet->n[x] % 5 == 0){
        	vet->y[x] = vet->n[x];
        }    
		else{
			vet->y[x] = 0;
        }    
    }
}

void escreveVetor(Vetores* vet){
	printf("Vetor X:\n");
	for(int x = 0;x < TAM; x++){
		if(vet->x[x] != 0){
			printf("[%d]\n",vet->x[x]);
        }
    }

	printf("\nVetor Y:\n");
	for(int x = 0;x < TAM; x++){
		if(vet->y[x] != 0){
			printf("[%d]\n",vet->y[x]);
        }    
	}
}