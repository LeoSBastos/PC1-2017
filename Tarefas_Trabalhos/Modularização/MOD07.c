#include <stdio.h>
#include <stdlib.h>
void soma (int A[], int B[], int *C[])
{
    int i,a=0;
    for(i=0; i<10; i++)
    {
        for(i=0; i<20; i++)
        {
            C[a]=A[i];
            a++;
            C[a]=B[i];
            a++;
        }
}
}
int main()
{
    int A[]= {1,1,1,1,1,1,1,1,1,1},B[]= {2,2,2,2,2,2,2,2,2,2},C[20],i;
    soma(A,B,C);
    for(i=0; i<20; i++)
    {
        printf("%d    ", C[i]);
    }
}
