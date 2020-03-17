//3. Escreva um algoritmo que leia um vetor de tamanho n (informado pelo
//usuário) e escreva a soma de todos os elementos de índice par.
#include <stdio.h>
#include <stdlib.h>

int* criaVetor();
void carregaVetor(int*,int);
void escreveVetor(int*,int);

int main(){
    int* vetor;
    int tam;

    printf("Escreva o numero de elementos:");
    scanf("%i", &tam);

    vetor = criaVetor(tam);

    if(vetor == NULL){
        printf("Memoria nao alocada");
    }

    carregaVetor(vetor,tam);
    escreveVetor(vetor,tam);
    
    free(vetor);
    return 0;

}

int* criaVetor(int tam){
    int* vetor;

    vetor = (int*) malloc (tam * sizeof(int));

    return vetor;
}

void carregaVetor(int* vetor, int tam){
    int i;
    for(i = 0;i < tam;i++){
        printf("Escreva o valor para a posicao [%i]:", i+1);
        scanf("%i", &vetor[i]);
    }
}

void escreveVetor(int* vetor, int tam){
    int i;
    int par = 0;

    printf("\nVetores de indice par:");

    for(i = 0; i < tam;i++){
        if(vetor[i] % 2 == 0){
            par += vetor[i];
        }
    }
    printf("%i", par);
}