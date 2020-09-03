#include<stdio.h>

void main()
{

    int n, qma=0,qme=100;

    printf("Quantos alunos ha na sala? ");
    scanf("%d", &n);

    int x[n],i;

    for(i=0; i<n; i++)
    {
        printf("Digite a %d nota: ", i+1);
        scanf("%d", &x[i]);
        if (qma<x[i])
            qma=x[i];
        if (qme>x[i])
            qme=x[i];
    }
    printf("A maior nota e %d e a menor e %d", qma,qme);
}
