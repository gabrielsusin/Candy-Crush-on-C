void imprimir(char mat[9][9])
{
    const char *const green = "\033[0;40;32m";
    const char *const yellow = "\033[0;40;33m";
    const char *const red = "\033[0;40;31m";
    const char *const blue = "\033[0;40;34m";
    const char *const normal = "\033[0m";
    int i,j;
    printf("   0  1  2  3  4  5  6  7  8\n");
    for(i=0; i<9; i++)
    {
        printf("\n");
        printf("%d ",i);
        for (j=0; j<9; j++)
        {
            if (mat[i][j] == 'Y')
                printf("%s %c %s",yellow,mat[i][j],normal);
            if (mat[i][j] == 'G')
                printf("%s %c %s",green,mat[i][j] ,normal);
            if (mat[i][j] == 'B')
                printf("%s %c %s",blue,mat[i][j],normal);
            if (mat[i][j] == 'R')
                printf("%s %c %s",red,mat[i][j],normal);
            if(mat[i][j]== '*')
                printf(" * ");
        }
        printf("%d ",i);
        printf(" \n");
    }
    printf("   0  1  2  3  4  5  6  7  8\n");
    return;
}
