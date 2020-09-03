#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remover (char s[], char c)
{
    int i,a,b;
    a=strlen(s);
    for(i=0; i<a;)
    {
        if(s[i]==c)
        {
            for(b=i; b<a-1; b++)
            {
                s[b]=s[b+1];
            }
            a--;
        }
        else i++;
    }
    s[a]='\0';
}
