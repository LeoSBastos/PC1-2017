#include <stdio.h>
#include <stdlib.h>

int main()
{
    char G[20],R[2];
    int A[50],i,j;

    for(j=0; j<50; j++)
    {
        A[j]=0;
    }
    printf("G\n");
    for(i=0; i<20; i++)
    {
        G[i]=getche();
    }
    for(j=0; j<50; j++)
    {
        printf("\nR%d\n",j+1);
        for(i=0; i<20; i++)
    {
        R[i]=getche();
    }
        for(i=0; i<20; i++)
        {
            if(R[i]==G[i])
            {
                A[j]++;
            }
        }
    }
    for(j=0; j<50; j++)
    {
        if(A[j]>2)
        {
            printf("\n%d - Aprovado\n", A[j]);
        }
        else
        {
            printf("\n%d - Reprovado\n", A[j]);
        }
    }
    return 0;

}
