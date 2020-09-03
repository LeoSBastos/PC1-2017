#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int x, y, t;
        printf("Digite os dois inteiros positivos: ");
        scanf("%d", &x)
        scanf("%d", &y);
        printf("O MDC entre %d e %d e igual a: ", x, y);
        t=y%x;
        while(t!= 0)
        {
            t=x%y;
            x=y;
            y=t;
        }
        printf("%d\n", x);
        return 0;
    }
