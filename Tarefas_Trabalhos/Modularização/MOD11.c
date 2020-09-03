#include <stdio.h>
#include <stdlib.h>
int soma(int A[3][3]){
int i,j,s=0;

for(j=0;j<3;j++){
    for(i=0;i<3;i++){
        s+=A[i][j];
    }
}
return(s);
}
