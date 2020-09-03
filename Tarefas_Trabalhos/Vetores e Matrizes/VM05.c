#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,V[50];
    scanf("%d", &n);

    for(i=0; i<50; i++)
    {
        scanf("%d", &V[i]);
    }
    switch (n)
    {
    case 0:
        return 0;
        break;
    case 1:
        for(i=0; i<50; i++)
        {
            printf("%d", V[i]);
        }
        break;
    case 2:
        for(i=49; i>=0; i--)
        {
            printf("%d", V[i]);
        }
        break;
    }
}
