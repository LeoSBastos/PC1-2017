#include<stdio.h>

void main()
{

    int n, y=1;

    printf("Digite um numero n: ");
    scanf("%d", &n);

    for(; n>0; n--)
    {
        printf("\n%d", y);
        y+=2;
    }
}
