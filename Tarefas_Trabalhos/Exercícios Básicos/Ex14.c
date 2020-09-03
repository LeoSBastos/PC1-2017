#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int x[20],i,a,p=0;
    double s=0;

    for(i=0; i<20; i++)
    {
        printf("Digite o %d digito ou digite qualquer numero diferente de 1 ou 0 para saber: ", i+1);
        scanf("%d", &x[i]);
        if(x[i] == 0 || x[i] == 1)
            continue;
        else break;
    }
    for (a=i-1; a>=0; a--,p++)
    {
        if(x[a]==1)
        s+=pow(2,p);
        else continue;
    }
    printf("O numero na base decimal e %.0lf", s);

}
