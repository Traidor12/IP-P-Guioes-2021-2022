/** Exercicio 7
Tipo de carro
**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int type;
    float age;
    printf("Insert the type and age of your veichle (type age), please note that types may only range from 1 to 4 \n");
    scanf("%d %f",&type,&age);

    switch(type)
    {
    case 1:
        if(age > 5)
            printf("\nTax: 45$");
        else
            printf("\nTax: 25$");
        break;
    case 2:
        if(age > 5)
            printf("\nTax: 50$");
        else
            printf("\nTax: 125$");
        break;
    case 3:
        if(age > 5)
            printf("\nTax: 75$");
        else
            printf("\nTax: 150$");
        break;
    case 4:
        if(age > 5)
            printf("\nTax: 150$");
        else
            printf("\nTax: 250$");
        break;
    default:
        printf("\nInvalid type!");
    }
}
