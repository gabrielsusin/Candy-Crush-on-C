void verificar(char mat [9][9],int *pont)
{
    int i,j,a=0;
    *pont = 0;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(mat[i][j] == mat[i][j+1] && mat[i][j] == mat[i][j+2])
            {
                mat[i][j] = mat[i][j+1] = mat[i][j+2] ='*';
                a++;
            }

            else if (mat[i][j] == mat[i][j-1] && mat[i][j] == mat[i][j-2])
            {
                mat[i][j] = mat[i][j-1] = mat[i][j-2] ='*';
                a++;
            }
            else if (mat[i][j] == mat[i+1][j] && mat[i][j] == mat[i+2][j])
            {
                mat[i][j] = mat[i+1][j] = mat[i+2][j] ='*';
                a++;
            }
            else if (mat[i][j] == mat[i-1][j] && mat[i][j] == mat[i-2][j])
            {
                mat[i][j] = mat[i-1][j] = mat[i-2][j] ='*';
                a++;
            }
        }
    }

    j=0;
    for(i=0; i<a; i++)
    {
        j=j+60;
        *pont = *pont + j;
    }
     printf("%d",a);
    return;
}
