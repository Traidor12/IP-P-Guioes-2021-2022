/** Exercicio 9
Ordenar numeros
**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c; // Usei float para possibilitar o uso de numeros reais
    printf("Insert 3 values (a,b,c) \n");
    scanf("%f,%f,%f",&a,&b,&c);

    if (a>b && a>c){
        if(b>c)
            printf("\n%.1f %.1f %.1f",a,b,c);
        else
            printf("\n%.1f %.1f %.1f",a,c,b);
    }
    else if (b>c){
        if(c>a)
            printf("\n%.1f %.1f %.1f",b,c,a);
        else
            printf("\n%.1f %.1f %.1f",b,a,c);
    }
    else{
        if(a>b)
            printf("\n%.1f %.1f %.1f",c,a,b);
        else
            printf("\n%.1f %.1f %.1f",c,b,a);
    }


}
