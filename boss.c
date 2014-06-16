void boss (void)
{
    void ler( int *a, int *b, char *c);
    void direcao( int a, int b, char c, char mat[9][9]);
    void imprimir(int mat[9][9]);
    void verificar(char mat [9][9],int *pont);
    void completa (char mat[9][9]);
    void desce (char mat[9][9]);

    int i,j, pont = 0;
    char mat[9][9], c;
    char nome[15], nome2[15];
    int a, b;
    printf("Diga seu nome:");
    scanf("%s%s",&nome,&nome2);
    printf("%s %s\n",nome,nome2);


    const char *const green = "\033[0;40;32m";
    const char *const yellow = "\033[0;40;33m";
    const char *const red = "\033[0;40;31m";
    const char *const blue = "\033[0;40;34m";
    const char *const normal = "\033[0m";


    printf("  0  1  2  3  4  5  6  7  8\n");
    for(i=0; i<9; i++)
    {
        printf("\n");
        printf("%d",i);
        for (j=0; j<9; j++)
        {
            mat[i][j] = rand() % 4;
            if (mat[i][j] == 1) printf("%s %c %s",yellow,mat[i][j] = 'Y',normal);
            if (mat[i][j] == 0) printf("%s %c %s",green,mat[i][j] = 'G',normal);
            if (mat[i][j] == 2) printf("%s %c %s",blue,mat[i][j] = 'B',normal);
            if (mat[i][j] == 3) printf("%s %c %s",red,mat[i][j] = 'R',normal);
        }
        printf(" %d",i);
        printf("\n");
    }
    printf("\n  0  1  2  3  4  5  6  7  8\n");

    for (j=0; j<14; j++)
    {
        if(pont >=100000) break;
        ler(&a,&b,&c);
        direcao(a,b,c,mat);
        imprimir(mat);
        verificar(mat,&pont);
        imprimir(mat);
        desce(mat);
        imprimir(mat);
        completa(mat);
        imprimir(mat);
        printf("Sua pontuação foi de %d\n",pont);
    }
    printf("voce atingio a pontuaçao");






    return;
}
