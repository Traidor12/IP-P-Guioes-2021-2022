/** Exercicio 2

Indicador se é maiusculo / maiusculo ou outro


**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    char value;
    printf("Insert a character: ");
    scanf("%c",&value);

    if(isupper(value))
    {
        printf("\nIts a uppercase character!");
    }
    else if (islower(value))
        printf("\nIts a lowercase character!");
    else
        printf("\nThe character inserted is neither lowercase nor uppercase");

}
