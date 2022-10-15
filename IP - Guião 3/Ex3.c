/** Exercicio 3

Tornar letra maiuscula


**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    char value;
    printf("Insert a character: ");
    scanf("%c",&value);

    // verificar se está no alfabeto

    int upper = isupper(value);
    int lower = islower(value);

    if(upper || lower){
        if(lower){
            printf("\nThe character %c is lowercase, here is its uppercase form: %c",value ,toupper(value));
        }
        else
            printf("\nThe character %c is already uppercase.",value);
    }
    else
        printf("\nAttention! The character inserted is not part of the alphabet!");

}
