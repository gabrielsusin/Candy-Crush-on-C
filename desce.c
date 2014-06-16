void desce (char mat[9][9])
{
    char y;
    int i,j,k;
    for(k=0; k<9; k++)
    {
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                if(mat[i+1][j] == '*' && mat[i][j] == '*')
                    j++;
                if(mat[i+1][j] == '*')
                {
                    y='*';
                    mat[i+1][j] = mat[i][j];
                    mat[i][j] = y;
                }
            }
        }
    }
    return;
}
