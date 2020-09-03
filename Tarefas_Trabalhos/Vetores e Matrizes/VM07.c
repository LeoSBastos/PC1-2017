#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,LC[500],LG[500];
    for(i=0; i<500; i++)
    {
        scanf("%d", &LC[i]);
        LG[i]=LC[i]/500;
    }
    for(i=0; i<500; i++)
    {
        printf("%d\n", LG[i]);
    }
    return 0;
}
