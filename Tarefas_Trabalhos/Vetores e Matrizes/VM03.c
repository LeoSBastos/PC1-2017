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
    int A[10],i;
    for(i=0; i<100; i++)
    {
        scanf("%d", &A[i]);
    }
    selection_sort(A,100);
    for(i=0; i<100; i++)
    {
        printf("%d\n", A[i]);
    }
}
