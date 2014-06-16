void direcao( int a, int b, char c, char mat[9][9])
{
    char y;
    if (c == 'D' || c =='d' )
    {
        y = mat[a][b+1];
        mat[a][b+1] = mat[a][b];
        mat[a][b] = y;
    }
    else if (c == 'E' || c == 'e' )
    {
        y = mat[a][b-1];
        mat[a][b-1] = mat[a][b];
        mat[a][b] = y;
    }
    else if (c == 'B' || c =='b')
    {
        y = mat[a+1][b];
        mat[a+1][b] = mat[a][b];
        mat[a][b] = y;
    }
    else if (c == 'C' ||c =='c' )
    {
        y = mat[a-1][b];
        mat[a-1][b] = mat[a][b];
        mat[a][b] = y;
    }
    return;
}
