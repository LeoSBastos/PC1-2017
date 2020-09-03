#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[10][10], i, j, t;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n");
        for (j = 0; j < 10; j++)
        {
            printf("%d     ", M[i][j]);
        }
    }
    for(i=0; i<10; i++)
    {
        t=M[1][i];
        M[1][i]=M[7][i];
        M[7][i]=t;
    }
    for(i=0; i<10; i++)
    {
        t=M[i][9];
        M[i][9]=M[i][3];
        M[i][3]=t;
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        printf("\n");
        for (j = 0; j < 10; j++)
        {
            printf("%d     ", M[i][j]);
        }
    }
    return 0;
}
