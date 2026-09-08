#include <stdio.h>

int main(){

int idade, senha, senha01, tentativa=1;
char nome[50], login[60];

        printf("CADASTRO DE LOGIN E SENHA\n");

printf("Digite o seu nome: \n");
scanf(" %49[^\n]s", nome);

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("cadastre o seu login: \n");
scanf(" %59[^\n]s", login);

printf(" cadastre a sua senha: \n");
scanf("%d", &senha);

printf(" escreva sua senha para fazer login: \n");
scanf("%d", &senha01);


while (( senha != senha01) && (tentativa < 3))
{

    printf("a senha esta incorreta, digite outra senha\n");
    tentativa++;
    scanf("%d", &senha01);
}

if (senha == senha01)
{  

    printf("senha digitada corretamente: \n");
    printf("seu nome e: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("seu login %s\n", login);
    printf("senha correta, login efetuado com sucesso!\n");  


}
    else
{
printf("limite de tentativa excedido, login bloqueado. \n");
}


return 0;
}  