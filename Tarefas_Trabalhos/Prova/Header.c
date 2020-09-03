#include <stdio.h>
#include <stdlib.h>
int entradaint(char *titulo){
int n;
printf("%s", titulo);
scanf("%d", &n);
return n;
}
int soma(int a, int b){
    return a+b;
}
void saidaint(char *titulo, int s){
    printf("\n%s%d",titulo,s);
}
int main()
{
    int n1,n2;
    n1=entradaint("\nDigite N1: ");
    n2=entradaint("\nDigite N2: ");
    saidaint("Soma = ",soma(n1,n2));
    return 0;
}
