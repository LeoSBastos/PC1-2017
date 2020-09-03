#include<stdio.h>

void main(){

double n, x;

printf("Digite a base da potencia: ");
scanf("%lf", &n);

printf("Digite a expoente da potencia: ");
scanf("%lf", &x);

printf("A potência desejada e %.0lf", pow(n,x));


}
