#include <stdio.h>
#include <stdlib.h>

void main()
{

 int x,y,z;

 printf("Digite o numero que deseja dividir em dois: ");
 scanf("%d", &x);

 if(x>999 && x<10000){
    y=x/100;
    z=x-(y*100);
    printf("%d dividido em dois da %d e %d.",x,y,z);
 }
 else printf("Numero invalido.");



}
