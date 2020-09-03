#include <stdio.h>
#include <stdlib.h>

void main()
{
 	int n,i,a,s=0;

	printf("Digite o numero que deseja saber se e perfeito: ");
	scanf("%d", &n);

 	int x[n];

	for(i=1,a=0;i<n;i++){
		if (n%i==0){
			x[a]=i;
			a++;
		}
	}
	for(i=0;i<a;i++){
		s+=x[i];
	}
	if(s==n)
		printf("Esse numero e perfeito!\n");
	else printf("Esse numero nao e perfeito!\n");
}
