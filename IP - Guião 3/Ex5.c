/** Exercicio 5
AM/PM
**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours,minutes;
    printf("Insert the hours and minutes: (Hours:Minutes)\n");
    scanf("%d:&d",&hours,&minutes);

    if(hours> 12){
        printf("\n%d:%d",hours,minutes);
        printf("\n%d:%d PM",24+hours-36,minutes);
    }else if (hours < 12 && hours != 0){
        printf("\n%d:%d",hours,minutes);
        printf("\n%d:%d AM",hours,minutes);

    }else if(hours == 12){
        printf("\n%d:%d",hours,minutes);
        printf("\n%d:%d PM",hours,minutes);
    }else if(hours == 0){
        printf("\n%d:%d",hours,minutes);
        printf("\n%d:%d AM",12,minutes);
    }
}
