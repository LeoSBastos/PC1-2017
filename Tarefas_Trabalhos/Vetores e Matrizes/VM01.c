#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[30],P[5],I[5],i,k,j,p=0,im=0;

    for(i=0; i<30; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0,k=0,j=0; i<30; i++)
    {
        if(p==5)
        {
            for(k=0; k<5; k++)
            {
                printf("%d\n",P[k]);
            }
            p=0;
            k=0;
        }
        if(im==5)
        {
            for(j=0; j<5; j++)
            {
                printf("%d\n",I[j]);
            }
            im=0;
            j=0;
        }
        if(A[i]%2==0)
        {
            P[k]=A[i];
            k++;
            p++;
        }
        else
        {
            I[j]=A[i];
            j++;
            im++;
        }
    }
    for(i=0; i<p; i++)
    {
        printf("%d\n",P[i]);
    }
    for(i=0; i<im; i++)
    {
        printf("%d\n",I[i]);
    }

    return 0;
}
