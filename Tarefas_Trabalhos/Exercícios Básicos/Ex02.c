#include<stdio.h>

void main()
{

    int n,x,y;

    printf("Digite um numero n: ");
    scanf("%d",&n);

    x=n;
    y=n-1;

    for(; y>0; y--)
        x+=y;

    printf("A soma de todos os %d primeiros numeros e igual a %d", n,x);



}
