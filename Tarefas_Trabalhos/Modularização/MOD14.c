#include <stdio.h>
#include <stdlib.h>

void primo(int n)
{

    if(n<0)
    {
        printf("Digite outro numero: ");
        scanf("%d", &n);
        primo(n);
    }
    else
    {
        int i,fn=n,limi,limf,aux;
        for(i=1; i<n; i++)
        {
            fn*=i;
        }
        limf=fn;
        for(limi=2,aux=0; limi<limf; limi++)
        {
            aux=0;
            for(i=2; i<limi; i++)
            {
                if(limi%i==0)
                {
                    aux=1;
                    break;
                }
            }
            if (aux==0)
                printf("%d\n", limi);
        }
    }
