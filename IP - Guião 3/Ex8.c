/** Exercicio 8
Determinar o maior
**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Insert 3 values (a,b,c) \n");
    scanf("%f,%f,%f",&a,&b,&c);

    if (a>b && a>c){
        printf("\nA is the biggest!");
    }
    else if (b>c){
        printf("\nB is the biggest!");
    }
    else
        printf("\nC is the biggest!");

}
