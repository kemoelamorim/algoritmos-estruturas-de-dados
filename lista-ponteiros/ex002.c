// Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba
// o maior endereço.
#include <stdio.h>
int main(){
    
  int x, z;
  x = 3;
  z = 2;

  if(&x > &z){
    printf("X é maior X:%x Z:%x\n", &x, &z);
  }else{
    printf("Z é maior X:%x Z:%x\n", &x, &z);
  }
}