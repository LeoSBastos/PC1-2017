#include <stdio.h>
#include <stdlib.h>
int binario (int x)
{
    int i=0,y,w,s=0;
    w=x;
    for(; x>0; i++)
    {
        x/=10;
    }

    int vet[i];

    for (y=0; y<i; y++) // salvar o resto da divisão no vetor
    {
        vet[y]=(w % 10);
        w/=10;
    }
    for(y=0; y<i; y++)
    {
        if(vet[y]==1)
            s+=pow(2,y);
        else continue;
    }

    return(s);
}
