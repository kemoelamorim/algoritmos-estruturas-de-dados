// Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
// valores de entrada e retorne o maior valor na primeira vari ́avel e o menor valor na segunda
// variável. Escreva o conteúdo das 2 variáveis na tela.
#include <stdio.h>
void compare(int *x, int *z);
int main(){
        
    int x, z;
    x = 3;
    z = 2;
    compare(&x, &z);
    printf("X: %d, Z: %d", x, z);
}
void compare(int *x, int *z){
    if(*x > *z){
      int tmp = *x;
      *x = *z;
      *z = tmp;
    }
}