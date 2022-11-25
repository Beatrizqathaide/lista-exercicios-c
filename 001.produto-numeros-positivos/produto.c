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

int apresentar(int n, int res) {
    for (int i = n; i >= 1; i--) {
        if (i > 1) {
            printf("%d * ", i);
        }
        
        if (i == 1) {
            printf("%d = %d\n", i, res);
        }
    }
}

int main() {
    int n, resultado, apresentacao;
    
    printf("Digite um valor: ");
    scanf("%d%*c", &n);

    resultado = produtoPositivos(n);
    apresentacao = apresentar(n, resultado);
    printf("Resultado: %d\n", apresentacao);

    

    

}