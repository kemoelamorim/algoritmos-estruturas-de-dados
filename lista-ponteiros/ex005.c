// Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para
// percorrer o array, apenas aritmética de ponteiros
#include <stdio.h>
void imprimeVetor(int *numeros, int tam);
int main(){        
    int numeros[10] = {0,1,2,3,4,5,6,7,8,9};
    imprimeVetor(numeros, 10);
   
}
void imprimeVetor(int *numeros, int tam){
    for(int i = 0; i < 10; i++){
      
      printf("%x\n", *numeros+i);
    }
}