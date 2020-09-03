#include <stdio.h>
#include <stdlib.h>
void natural (int A[])
{
    int i;
    for(i=0;i<10; i++)
    {
        if(A[i]>0)
        {
            continue;
        }
        else A[i]=0;
    }
}
