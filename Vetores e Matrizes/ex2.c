//2. Escreva um algoritmo que leia um vetor de 20 posições e escreva a posição
//de cada elemento igual a 10 dentro dele.

#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int* criaVetor();
void carregaVetor(int*);
void imprimeVetor(int*);

int main(){
    int* vetor;

    vetor = criaVetor();

    if (vetor == NULL){
        printf("Memoria nao alocada");
    }
    carregaVetor(vetor);
    imprimeVetor(vetor);

    free(vetor);
    return 0;
}

int* criaVetor(){
    int* vetor;

    vetor = (int) malloc (TAM * sizeof(int));

    return vetor; 
}

void carregaVetor(int* vetor){
    int i;
    for (i = 0; i < TAM; i++){
        printf("Escreva o valor para a posicao [%i]", i+1);
        scanf("%i", &vetor[i]);
    }
}

void imprimeVetor(int* vetor){
    int i;
    int cont = 0;
    printf("\n...::Posicoes igual a 10::...");
    
    for(i=0; i <TAM;i++){
        if(vetor[i] == 10){
            printf("[%i]\n", i+1);
            cont++;
        }
    } 
    if(cont == 0){
        printf("Não existem vetores iguais a 10");
    }
}
