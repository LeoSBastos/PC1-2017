#include <stdio.h>
#include <stdlib.h>

void main()
{
  int n, i, a=0;

    printf("Digite o numero que deseja aprender se e triangular: ");
    scanf("%d", &n);

    for(i=1; i<(n/3); i++)
    {
        if (n%i==0 && n%(i+1)==0 && n%(i+2))
        {
            a=1;
            break;
        }
    }
    if(a==0) printf("\nEsse numero nao e triangular!");
    else printf("\nEsse numero e triangular!");
}
