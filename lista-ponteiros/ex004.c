// Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
// endereço de cada posiçao desse array.
#include <stdio.h>
int main(){        
    int numeros[10];
    for(int i = 0; i < 10; i++){
      printf("%x\n", &numeros[i]);
    }
   
}
