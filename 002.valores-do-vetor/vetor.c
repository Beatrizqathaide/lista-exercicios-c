/*
Faça uma função que receba como parâmetro um vetor de inteiros e seu tamanho. A função deve modificar o vetor de maneira que:
a) Elementos com valor original entre menor ou igual a 0 fiquem com o valor -2
b) Elementos cujo valor original (vo) esteja no intervalo (1<= vo <= 5) fiquem com o valor -1
c) Elementos que não sejam enquadrados nos itens a e b recebam o valor 0.
*/

#include <stdio.h>

int mudaValor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] <= 0) {
            vetor[i] = -2;
        } 
        else if (vetor[i] >= 1 && vetor[i] <= 5) {
            vetor[i] = -1;
        } 
        else {
            vetor[i] = 0;
        }
    }
    
}


int main() {
    int vetor[50], tamanho, convertido;

    printf("Qual é o tamanho do vetor? ");
    scanf("%d%*c", &tamanho);

    for(int i = 0; i < tamanho; i++) {
        printf("Digite um número para a posição %d: \n", i);
        scanf("%d", &vetor[i]);

    }

    mudaValor(vetor, tamanho);

    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
           
    }
    printf("\n");
}