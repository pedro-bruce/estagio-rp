/*
    2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 
    valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que 
    desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando 
    se o número informado pertence ou não a sequência.
*/

#include <stdio.h>

int verify_fibonacci(int num) {
    int a = 0; 
    int b = 1;
    int c = 0;

    // base case
    if(num == a || num == b) return 1;

    // calculates the Fibonacci sequence
    while(c <= num) {
        c = a + b;
        
        if(c == num) return 1;

        a = b;
        b = c;
    }

    return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(verify_fibonacci(num))
        printf("%d belongs to the Fibonacci sequence", num);
    
    else printf("%d does not belongs to the Fibonacci sequence", num);

    return 0;
}