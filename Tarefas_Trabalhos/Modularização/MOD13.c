#include <stdio.h>
#include <stdlib.h>

void imprime(int n)
{

int x;
if (n==0){
    printf("\n0");
}
else{
    printf("\n%d",n);
    imprime(n-1);
}
}
