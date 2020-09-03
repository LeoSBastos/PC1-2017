#include <stdio.h>
#include <stdlib.h>
void selection_sort(int num[], int tam)
{
    int i, j, min, t;
    for (i = 0; i < (tam-1); i++)
    {
        min = i;
        for (j = (i+1); j < tam; j++)
        {
            if(num[j] < num[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            t = num[i];
            num[i] = num[min];
            num[min] = t;
        }
    }
}

int main()
{
    int i, j, M[5][5],n=0, V[25];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            V[n]=M[i][j];
            n++;
        }
    }
    selection_sort(V,25);

    for (n=0,i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            M[i][j]=V[n];
            n++;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf("%d     ", M[i][j]);
        }
    }
    return 0;
}
