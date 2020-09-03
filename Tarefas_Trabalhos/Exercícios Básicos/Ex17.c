#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x,y,z,t;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &y);
    printf("\nDigite o terceiro numero: ");
    scanf("%d", &z);

    if(y<x)
    {
        t=y;
        y=x;
        x=t;
    }
    if(z<x)
    {
        t=z;
        z=x;
        x=t;
    }
    if(z<y)
    {
        t=z;
        z=y;
        y=t;
    }
    printf("\n%d\n%d\n%d",x,y,z);
}
