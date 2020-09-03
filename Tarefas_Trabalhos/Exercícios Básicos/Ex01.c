#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int x;
    for(x=1; x!=0;)
    {
        printf("Digite o numero que voce deseja saber o quadrado ou digite 0 para sair do programa: ");
        scanf("%d", &x);
        if(x==0)
        {
            printf("\nPrograma Encerrado!");
            break;
        }
        else printf("\nO quadrado de %d e %.0lf\n", x, pow(x,2));
    }
}
