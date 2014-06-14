void completa (char mat[9][9])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(mat[i][j]== '*')
            {
                mat[i][j] = rand() % 4;
            if (mat[i][j] == 1) mat[i][j] = 'Y';
            if (mat[i][j] == 0) mat[i][j] = 'G';
            if (mat[i][j] == 2) mat[i][j] = 'B';
            if (mat[i][j] == 3) mat[i][j] = 'R';

            }
        }
    }
    return;
}



