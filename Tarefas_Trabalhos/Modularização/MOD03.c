#include <stdio.h>
#include <stdlib.h>
void sort(int *V[])
{
    int i, j, m, a;
    for (i = 0; i < (2); i++)
    {
        m = i;
        for (j = (i+1); j < 3; j++)
        {
            if(V[j] < V[m])
                m = j;
        }
        if (V[i] != V[m])
        {
            a = V[i];
            V[i] = V[m];
            V[m] = a;
        }
    }
}