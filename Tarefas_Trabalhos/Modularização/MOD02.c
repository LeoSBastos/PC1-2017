#include <stdio.h>
#include <stdlib.h>

float media (float V[], char c)
{
    int i;
    float S=0,m;
    switch(tolower(c)){
    case 'p':
    S+=V[0]*5;
    S+=V[1]*3;
    S+=V[2]*2;
    m=S/10;
    break;
    case 'h':
    for(i=0;i<3;i++){
        S+=1/V[i];
    }
    m=3/S;
    break;
}
return (m);
}