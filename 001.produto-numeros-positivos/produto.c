/*
Faça uma função que calcule e retorne o produto dos n primeiros números positivos,
onde n deve ser passado como parâmetro. Ex.: para n=4, a função deve retornar
4*3*2*1=24. Este valor é conhecido como fatorial de n. Se n não for positivo, a função
deve retornar 1.
*/

#include <stdio.h>

int produtoPositivos(int n) {
    int fat = n;

    if (n > 0) {
        for (int i = n - 1; i >= 1; i--){
            fat *= i;
  
        }
        return fat;
    
    } else {
        return 1;
    } 
    
}

int main() {
    int n, resultado;
    
    printf("Digite um valor: ");
    scanf("%d%*c", &n);

    resultado = produtoPositivos(n);
    printf("Resultado: %d\n", resultado);

}