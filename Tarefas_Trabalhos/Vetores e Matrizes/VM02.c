#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],C[10],i;

    for(i=0; i<10; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i=0; i<10; i++)
    {
        scanf("%d", &B[i]);
    }
    for(i=0; i<10; i++)
    {
        C[i]=A[i]*B[i];
    }
    for(i=0; i<10; i++)
    {
        printf("%d\n", C[i]);
    }
    return 0;
}
