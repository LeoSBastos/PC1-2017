#include<stdio.h>
#include<stdlib.h>

void main()
{

    long int x,y,z;
    char c;
    fflush(stdin);
    for(c='S'; toupper(c)=='S';)
    {
        printf("\nDigite um numero no qual voce deseja saber o fatorial: ");
        scanf("%ld", &x);
        z=x;
        for(y=x-1; y>0; y--)
            x*=y;
        printf("\nO fatorial de %ld e %ld.",z,x);
        fflush(stdin);
        printf("\nDeseja fazer o fatorial de mais um numero. S-Sim ou N-Nao: ");
        scanf("%c", &c);
    }
    printf("Programa encerrado.");
}
