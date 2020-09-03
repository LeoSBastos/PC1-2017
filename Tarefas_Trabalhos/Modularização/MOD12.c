#include <stdio.h>
#include <stdlib.h>
int soma(int N){
int x;
if (N==0){
    return 0;
}
else{
    x=N+soma(N-1);
    return x;
}
}
