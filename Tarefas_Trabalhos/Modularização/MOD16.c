#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void length (char c[])
{
    printf("\n%d",strlen(c));
}
void pont (char c[])
{
    int i,a=0;
    for(i=0; i<strlen(c); i++)
    {
        switch((int)c[i])
        {
        case(44):
        case(45):
        case(46):
        case(58):
        case(59):
        case(40):
        case(41):
        case(63):
        case(33):
        case(34):
            a++;
            break;
        }
    }
    printf("\n%d",a);
}
void numero (char c[])
{
    int i,a=0;
    for(i=0; i<strlen(c); i++)
    {
        if(((int)c[i])>47&&((int)c[i])<58){
            a++;
        }
    }
    printf("\n%d",a);
}
void minuscula (char c[])
{
    int i,a=0;
    for(i=0; i<strlen(c); i++)
    {
        if(((int)c[i])>96&&((int)c[i])<123){
            a++;
        }
    }
    printf("\n%d",a);
}
