#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float V[500],nm;

    for(i=0; i<500; i++)
    {
        scanf("%d", &V[i]);
    }
    nm=V[0];
    for(i=0; i<500; i++)
    {
        if(nm<V[i])
        {
            nm=V[i];
        }
    }
    for(i=0; i<500; i++)
    {
        V[i]/=nm;
    }
    for(i=0; i<500; i++)
    {
        printf("%.2f  ", V[i]);
    }
}
