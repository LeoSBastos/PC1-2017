#include <stdio.h>
#include <stdlib.h>
void tabuada(int n){
int i;
for(i=1;i<=n;i++){
    printf("\n%d X %d = %d",i,n,(i*n));
}
}

int main()
{
    int n;
    scanf("%d", &n);
    tabuada(n);
    return(0);
}
