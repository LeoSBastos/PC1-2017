#include<stdio.h>

void main()
{

    int n, i, j, x,a;

    printf("Digite a quantidade de multiplos que você deseja saber: ");
    scanf("%d", &n);
    printf("\nDigite o primeiro numero inteiro: ");
    scanf("%d", &i);
    printf("\nDigite o segundo numero inteiro: ");
    scanf("%d", &j);

    for (x=0,a=0; x<n; a++)
    {
        if(a%i==0)
        {
            printf("\n %d", a);
            x++;
        }
        else if(a%j==0)
        {
            printf("\n %d", a);
            x++;
        }
    }
}
