// 1. Escreva um algoritmo recursivo que calcule o fatorial de um número.
#include <stdio.h>
int fatorial(int x);
int main() {
   printf("%d" ,fatorial(3));
}
int fatorial(int x){
  if(x == 1){
    return 1;
  }
  return x * fatorial(x - 1);
}
  