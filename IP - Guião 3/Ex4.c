/** Exercicio 4
Determinar quadrante


**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y,x;
    printf("Insert coordinates: (x,y)\n");
    scanf("%f,%f",&x,&y);

    if(x!=0 && y!=0)
    {
        if(x>0)
        {
            if(y>0)
                printf("\nFirst quadrant!");
            else
                printf("\nFourth quadrant!");
        }
        else if(x<0)
        {
            if (y>0)
                printf("\nSecond quadrant!");
            else
                printf("\nThird quadrant!");


        }
    }else if(x == 0 && (y > 0 || y < 0))
    printf("\nYY axis");
    else if(y == 0 && (x > 0 || x < 0))
        printf("\nXX axis");
    else
        printf("\nThe point is the origin");
}
