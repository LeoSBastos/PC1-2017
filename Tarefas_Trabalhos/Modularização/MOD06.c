#include <stdio.h>
#include <stdlib.h>
int lerNumero()
{
    int n;
    scanf("%d", &n);
    return(n);
}
int primo(int valor)
{
    int i,a=0;
    for (i=1; i<=valor; i++)
        if(valor%i==0) a++;
    if (a==2) return(1);
    else  return(0);
}
void imprime(int valor, int primo)
{
    if (primo==1)
        printf("E primo");
    else if (primo==0)
        printf("Nao e primo");
}
