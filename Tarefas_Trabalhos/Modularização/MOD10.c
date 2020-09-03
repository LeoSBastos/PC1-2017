#include <stdio.h>
#include <stdlib.h>

float media(int v[])
{
    int i,s=0;
    float m;
    for (i=0; i<(sizeof(v)-1); i++)
    {
        s+=v[i];
    }
    m=(float)s/i;
    return (m);
}
int menor(int v[])
{
    int i,mn;
    mn=v[0];
    for (i=0; i<(sizeof(v)-1); i++)
    {
        if(mn>v[i])
        mn=v[i];
    }
    return (mn);
}
int maior(int v[])
{
    int i,ma;
    ma=v[0];
    for (i=0; i<(sizeof(v)-1); i++)
    {
        if(ma<v[i])
        ma=v[i];
    }
    return (ma);
}
