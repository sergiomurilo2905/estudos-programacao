#include <stdio.h>

int main(){

int idade, numero, numero1, numero2;
char nome[50];

        printf("CADASTRO DE UMA SEQUENCIA DE NUMEROS\n");

printf("Digite o seu nome: \n");
scanf(" %49[^\n]s", nome);

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite o numero inicial: \n");
scanf("%d", &numero1);

printf("numero final deve ser maior que o numero inicial\n");

printf("Digite o numero final: \n");
scanf("%d", &numero2);


if (numero2 <= numero1)
{

    printf("numero final invalido para o teste, fim do programa\n");
    return 0;

}


printf("seu nome e: %s \n", nome);
printf("Idade: %d \n", idade);
printf("seu numero inicial e %d\n", numero1);
printf("seu numero final e %d\n", numero2);


for (numero = numero1; numero <= numero2; numero++)
{
   printf("Numero: %d", numero);
   
   if( numero % 2 == 0)
{

    printf(" - numero e par\n");

}

else
{
    printf (" - numero e impar\n");
}
    
}




return 0;
}