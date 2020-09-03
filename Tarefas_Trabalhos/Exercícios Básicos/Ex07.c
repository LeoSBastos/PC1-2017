#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,s=0;

    printf("Digite a quantidade de numeros inteiros a serem digitados: ");
    scanf("%d", &n);

    int x[n],i;

    for(i=0; i<n; i++)
    {
        printf("\nDigite o %d numero: ", i+1);
        scanf("%d", &x[i]);
    }

    for(i=0; i<n; i++)
    {
        if(x[i]%2==0)
            s+=x[i];
    }

    printf("A soma dos numeros pares e %d", s);
}
