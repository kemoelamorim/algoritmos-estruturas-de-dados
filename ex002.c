// 2. Desenvolva uma função recursiva que receba como entrada um número inteiro positivo N e retorne a soma de todos os elementos de 0 até N.
#include <stdio.h>

int somaRecursiva(int n);

int main(){
    printf("%d", somaRecursiva(2));
}

int somaRecursiva(int n){
    if(n == 1){
        return n;
    }
    return n + somaRecursiva(n-1);
}