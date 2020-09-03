#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b,t;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    t=a+b;
    b=a+t;
    a=t-8;
    t+=10;

    return(0);
    }
