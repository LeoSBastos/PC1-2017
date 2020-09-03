#include<stdio.h>

void main()
{

    int i,n;
    float x,mv=0;

    for(i=1; i<=31; i++)
    {
        printf("\nDigite a venda do dia: ");
        scanf("%f", &x);

        if(mv<x)
        {
            n=i;
            mv=x;
        }
    }
    printf("\nA maior venda do mes foi no dia %d de marco e foi R$%.2f",n,mv);
}
