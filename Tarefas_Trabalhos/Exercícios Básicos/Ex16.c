#include <stdio.h>
#include <stdlib.h>

void main()
{

    int x,y,z,t;

    printf("Digite o primeiro lado: ");
    scanf("%d", &x);
    printf("\nDigite o segundo lado: ");
    scanf("%d", &y);
    printf("\nDigite o terceiro lado: ");
    scanf("%d", &z);

    if(y>x)
    {
        t=y;
        y=x;
        x=t;
    }
    if(z>x)
    {
        t=z;
        z=x;
        x=t;
    }

    if(pow(x,2)==pow(y,2)+pow(z,2)){
        printf("Esse e um triangulo retangulo!");
    }
    else printf("Esse nao e um triangulo retangulo!");
}
