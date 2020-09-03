#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float a, M[12][13], V[12], qm;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 13; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    for (i = 0; i < 12; i++)
    {
        qm = M[i][0];
        for (j = 0; j < 13; j++)
        {
            if (M[i][j] > qm)
            {
                V[i] = M[i][j];
            }
        }
    }
    for (i = 0; i < 12; i++)
    {
        printf("\n");
        for (j = 0; j < 13; j++)
        {
            printf("%f   ", M[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 13; j++)
        {
            M[i][j] /= V[i];
        }
    }
    for (i = 0; i < 12; i++)
    {
        printf("\n");
        for (j = 0; j < 13; j++)
        {
            printf("%f     ", M[i][j]);
        }
    }
    return 0;
}
