/**Exercicio 10

Planeamento:
Se o mes for fevereiro e o dia for 28, aumentar mes e por dia a 1.
se o mes tiver 30 dias e o dia for 30, aumentar mes e por dia a 1, o mesmo para os de 31 dias.

se o mes for 12, e o dia 31, aumentar ano.

**/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int day,month,year;


    printf("Insert date, use the following format: dd/mm/aaaa\n");
    scanf("%d/%d/%d",&day,&month,&year);

    switch(day)
    {
    case 28:
        if(month == 2)
        {
            month++;
            day = 1;

        }
        else day++;
        break;
    case 30:
        if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            month ++;
            day = 1;

        }
        else
            day++;
            break;
    case 31:
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
        {
            month++;
            day = 1;

        }
        else if(month == 12)
        {
            year++;
            day = 1;
            month = 1;
        }
        else
            day++;

        break;
    default:
        day++;
    }
    printf("\nThe next day is: %d/%d/%d",day,month,year);




}
