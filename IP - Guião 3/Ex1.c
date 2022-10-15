/** Exercicio 1

Aplicação da formula resolvente


**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;

    // Get values from user
    printf("Insert the values of a, b and c in the following format (a,b,c): ");
    scanf("%f,%f,%f",&a,&b,&c);

    // Check if equation has real roots
    float realrootchecker = (b*b) - 4*(a*c);
    printf("%.1f",-b);
    float firstroot,secondroot;
    /**Math lesson! Caso a equação acima (equivalente à parte da raiz quadrada na equação for menor que 0, não exitem raizes reais, caso for 0 existe uma raíz, e caso for maior que 0 existem varias**/
    if(realrootchecker < 0)
    {
        printf("\nThe quadratic equation inserted has no real roots.");
    }
    else if(realrootchecker = 0)
    {
        firstroot = (-b + 0)/(2*a);
        printf("\nThe quadratic equation has one real root, %.1f",firstroot);
    }
    else
    {
        firstroot = (-b + sqrt((b*b)-4*(a*c)))/(2*a);
        secondroot = (-b - sqrt((b*b)-4*(a*c)))/(2*a);
        printf("\nThe quadratic equation has two real roots, %.1f and %.1f",firstroot,secondroot);
    }

}

