#include <stdio.h>

void main()
{
    int n,i,a=0;
    printf("Digite um numero para saber se e primo: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        if(n%i==0)
            a++;
    }
    if (a==2)
        printf("\nO numero e primo!\n");
    else  printf("\nO numero nao e primo!\n");
}
