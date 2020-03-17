//Faça um Programa que peça a idade e a altura de 5 pessoas, armazene
//cada informação no seu respectivo vetor. Imprima a idade e a altura na
//ordem inversa a ordem lida.

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct {
    int idade;
    float altura;
} Pessoas;

Pessoas* criaPessoa();
void carregaPessoa(Pessoas*);
void escrevePessoa(Pessoas*);

int main(){
    Pessoas* pessoa;

    pessoa = criaPessoa();

    if(pessoa == NULL){
        printf("Memoria não alocada");
    }

    carregaPessoa(pessoa);
    escrevePessoa(pessoa);

    free(pessoa);
    
    return 0;

}

Pessoas* criaPessoa(){
    Pessoas* pessoa;

    pessoa = (Pessoas*) malloc (TAM * sizeof(Pessoas));

    return pessoa;
}

void carregaPessoa (Pessoas* pessoa){
    int i;
    for (i = 0; i < TAM; i++){
        printf("Digite a idade da pessoa [%i]:",i+1);
        scanf("%i", &pessoa[i].idade);

        printf("Digite a  altura da pessoa [%i]:",i+1);
        scanf("%f", &pessoa[i].altura);
    }
}

void escrevePessoa(Pessoas* pessoa){
    int i = 0;
    for(i = TAM - 1;i >= 0; i--){
        printf("\nPessoa[%i]:\n", i+1);
        printf("Altura: %.2f\n", pessoa[i].altura);
        printf("Idade: %i\n", pessoa[i].idade);
    }
}


