// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
// real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
// variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
#include <stdio.h>

int main(){
    
    int a = 10;
    float b = 2.5;
    char c = 'C';
    
    int * inteiro = &a;
    float * decimal = &b;
    char * caractere = &c;
    
    printf("--------------Antes---------------\n");
    printf("%d\n", *inteiro);
    printf("%f\n", *decimal);
    printf("%c\n", *caractere);

    printf("--------------Depois---------------\n");
    *inteiro = a -2;
    *decimal = b + 1;
    *caractere = 'H';
    printf("%d\n", *inteiro);
    printf("%f\n", *decimal);
    printf("%c\n", *caractere);

    return 0;
}
  