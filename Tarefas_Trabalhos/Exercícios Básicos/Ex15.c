#include <stdio.h>
#include <stdlib.h>

void main()
{

    int n,i,a=0;

    printf("Digite o numero na base 10 que voce deseja converter: ");
    scanf("%d", &n);


    for(i=n; i>0; a++)
    {
        i/=2;
    }

    int x[a];

    for(i=0; i<a; i++)
    {
        x[i]=n%2;
        n/=2;
    }
    for(i=a-1; i>=0; i--)
    {

        printf("%d",x[i]);


    }

}

