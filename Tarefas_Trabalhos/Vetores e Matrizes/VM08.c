#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, l, m, n = 0, a = 0, x = 0, V[75], A[15][5];
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 15; i++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (j = 0; j < 5; j++)
    {
        printf("\n");
        for (i = 0; i < 15; i++)
        {
            printf("%d   ", A[i][j]);
        }
    }
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 15; i++)
        {
            for (m = 0; m < 75; m++)
            {

                if (A[i][j] == V[m])
                {
                    n = 0;
                    break;
                }
                else
                {
                    n=1;
                    continue;
                }
            }
            if (n == 1)
            {
                for (l = 0; l < 5; l++)
                {
                    for (k = 0; k < 15; k++)
                    {
                        if (A[i][j] == A[k][l])
                        {
                            x++;
                        }
                    }
                }
                if (x > 1)
                {

                    V[a] = A[i][j];
                    a++;
                    printf("\n%d aparece %d vezes em A", A[i][j], x);
                }
                x=0;
            }
            else if (n == 0)
            {
                continue;
            }
        }
    }
    return 0;
}
