#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char *ler(char *){
FILE *string;
    string = fopen("fontes.txt","r");//abrir o arquivo em  read "nomedoarquivo.txt""read ou write"
    if (string == NULL) // teste de certeza se leu o arquivo certo
    {
        printf("ERROR ARQUIVO NAO ENCONTRADO.\n");
        system("pause");
        return 0;
    }
    int contador=0;
    char c;
    do //contar o tamanho da string
    {
        c = fgetc(string);
        if ((c != ' ') && (c!= EOF) && (c != "\n")) //retirando aspectos inrelevantes
        {
            contador++;
        }
    }
    while (c!=EOF);//condicao de c != fim do file
    contador++; //porque tem que considerar o \0
    char *x = (char*) malloc((sizeof(char)*sizeof(x)));
    string = fopen("fontes.txt","r"); //abrir o arquivo em write
    if (string == NULL) //teste se e o arquivo certo
    {
        printf("ERROR ARQUIVO NAO ENCONTRADO.\n");
        system("pause");
        return 0;
    }
    printf("\nDentro do arquivo, estava a string: ");
    while (fgets(x,contador,string) != NULL) //fgets para salvar
    {
        printf("%s",x); //teste print
    }
    return x;
}
void gravar(char A[]){
    FILE *string;
    string = fopen("fontes.txt","w"); //abrir o arquivo em write
    if (string == NULL) //teste se e o arquivo certo
    {
        printf("ERROR ARQUIVO NAO ENCONTRADO.\n");
        system("pause");
        return 0;
    }
    fputs(A,string); //salva no txt
    fclose(string);//feixa o arquivo
}
void cifrar ()
{
    char* A=ler();
    char C[strlen(A)], D[strlen(A)]; //D e para se a chave for menor que a string a ser cifrada/decifrada ela cobrir toda a string
    int i,j,a1=strlen(A),a2,a3,t; //i e j sao contadores , l, a1,a2 e a3 sao auxiliares
    printf("\n\nDigite a chave: ");
    scanf("%s", &C);
    int l=strlen(C);
    for(i=0, j=0; i<a1; i++) //esse loop para criar o D
    {
        if(j==l)
        {
            j=0;
        }
        D[i]=C[j];
        j++;
    }
    for(i=0; i<a1; i++)
    {
        a2=(int)(tolower(A[i]))-97; // aqui pega o ASCII da letra a ser cifrada subtrai de 'a' para saber quantas casas ele vai pular da letra da chave
        a3=a2+(int)(tolower(D[i])); //aqui ele pega o numero que vai pular de casas mais a letra da chave e soma os codigos ASCII
        if(a3>122)  //caso passe de 'z' volta para 'a'
        {
            t=a3-123;
            a3=t+97;
        }
        *(A+i)=(char)a3; //aqui ele transforma o codigo ASCII em char
    }
    gravar(A);
}
void decifrar ()
{
    char* A=ler();
    char C[strlen(A)], D[strlen(A)];
    int i,j,a1=strlen(A),a2,a3;
    printf("\n\nDigite a chave: ");
    scanf("%s", &C);
    int l=strlen(C);
    for(i=0, j=0; i<a1; i++)
    {
        if(j==l)
        {
            j=0;
        }
        D[i]=C[j];
        j++;
    }
    for(i=0; i<a1; i++)
    {
        for (j=0,a2=(int)D[i]; a2!=A[i]; a2++) //aqui e um loop que vai rodar as letras ate letra da chave ser a mesma da letra cifrada
        {
            if(a2>122)  //caso passe de 'z' volta para 'a'
            {
                a2=96;
                j--;
            }
            j++;
        }
        a3=j+97; //aqui pula o numero de casas do 'a' somando os codigos ASCII e assim recebe o codigo ASCII da letra decifrada
        *(A+i)=(char)a3; //aqui transforma o codigo ASCII em char    }
    gravar(A);
}
}
int main()
{
    char a;
    printf("C-Cifrar\n\nD-Decifrar\n\nQualquer outra letra finaliza a execucao do programa\n\nVoce deseja fazer qual operacao: ");
    scanf("%c", &a);
    switch(toupper(a))
    {
    case('C'):
    cifrar();
    break;
    case('D'):
    decifrar();
    break;
    default:
    break;
    }
printf("\nExecucao finalizada");
return(0);
}
