/*
    Escreva um programa que inverta os caracteres de um string.
*/

#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int size = strlen(str);
    int i;
    int j;
    char temp;

    for(i = 0, j = size-1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("%s", str);
}

int main() {
    char str[255];

    printf("Write a string: ");
    scanf(" %[^\n]", str);

    reverse_string(str);

    return 0;
}