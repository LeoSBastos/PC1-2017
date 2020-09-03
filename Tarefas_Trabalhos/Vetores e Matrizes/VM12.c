#include <stdio.h>
#include <stdlib.h>
float media(float V[], int tam)
{
    int i;
    float S=0, M=0;
    for(i=0; i<tam; i++)
    {
        S+=V[i];
    }
    M=S/tam;
    return(M);
}
int main()
{
    int i,j,n=0;
    float M[10][10], V[10], m;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }
    for (i = 0, j=0; i < 10 && j < 10; i++, j++)
    {
        V[n]=M[i][j];
        n++;
    }
    m=media(V,n);
    printf("A media e %.2f", m);
    return 0;
}
