/** Exercicio 6
Lados do triangulo
**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Insert 3 values (a,b,c) \n");
    scanf("%f,%f,%f",&a,&b,&c);

    int istriangle = (a+b > c && a+c > b && b+c > a); //Pode ser colocado diretamente no if

    if(istriangle){
        if(a==b && b == c){
            printf("\nThe three sides form an equilateral triangle!");
        }else if(a==b || b == c || a==c){
            printf("\nThe three sides form an isosceles triangle!");
        }else
            printf("\nThe three sides form an scalene triangle!");

    }
    else
        printf("\nThe values inserted do not form a triangle");
}
