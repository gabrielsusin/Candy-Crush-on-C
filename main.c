#include <stdio.h>
#include <time.h>
void boss (void);
void menu (void)
{
    int p,c;
    FILE *arquivo;
    int v[5];
    int i;
    printf("Escolha uma opção: \n");
    printf("1 -Jogar\n");
    printf("2 -Como jogar?\n");
    printf("3 -Sair\n");
    scanf("%d",&p);
    system("clear");
    switch(p)
    {
        case 1:
        {
            boss();
            break;
        }



    case 2:
    {
        arquivo = fopen("/home/PORTOALEGRE/14104116/DriveH/LAPROI/programas/CandyCrush/comojogar.txt","r");
          while(1)
        {
        c = fgetc(arquivo);
        if( feof(arquivo) )
        {
          break ;
        }
        printf("%c", c);
        }
        fclose(arquivo);
        break;

    }
        case 3:
        {
            printf("******JOGO ENCERRADO******");
            return -1;
        }

        return;
    }
}


    int main(void)
    {
        menu();
        //printf("%s",nome);
        return 0;
    }



