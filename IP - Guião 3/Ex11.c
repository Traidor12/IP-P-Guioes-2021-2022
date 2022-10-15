/** Exercicio 11
Notas por disciplina, verificação de dados basica (e muito ineficiente ja que não posso usar for/while)
**/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    char course;
    int grade;
    printf("Disciplinas: \n");
    printf("  Portugues(P)\n");
    printf("  Matematica(M)\n");
    printf("  Ingles(I)\n");
    scanf("%c",&course);
    course = toupper(course);
    if (course != 'P' && course != 'M' && course != 'I')
    {
        printf("Invalid class selected\n");
        return 0;
    }
    else
    {
        printf("\n Insert grade (0-20): \n");
        scanf("%d",&grade);
        if(grade < 0 || grade > 20)
        {
            printf("Invalid grade");
            return 0;
        }
        else if(grade > 10)
        {
            switch(course)
            {
            case 'P':
                printf("\nNa disciplina de portugues o aluno passou com %d valores",grade);
                break;
            case 'M':
                printf("\nNa disciplina de matematica o aluno passou com %d valores",grade);
                break;
            case 'I':
                printf("\nNa disciplina de ingles o aluno passou com %d valores",grade);
                break;
            }

        }
        else
        {
            switch(course)
            {
            case 'P':
                printf("\nNa disciplina de portugues o aluno reprovou com %d valores",grade);
                break;
            case 'M':
                printf("\nNa disciplina de matematica o aluno reprovou com %d valores",grade);
                break;
            case 'I':
                printf("\nNa disciplina de ingles o aluno reprovou com %d valores",grade);
                break;
            }
        }


    }
}
