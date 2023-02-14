// 3. Desenvolva uma função recursiva que receba como entrada um número inteiro positivo N e retorne o seguinte cálculo: 1 + 1/2 + 1/3 + 1/4 + ... + 1/N.
#include <stdio.h>

float somaFracaoRecursiva(int n);

int main(){
    printf("%.2f", somaFracaoRecursiva(2));
}

float somaFracaoRecursiva(int n){
  if(n == 1){
    return 1;
  }
  return 1.0/n + somaFracaoRecursiva(n - 1);
}