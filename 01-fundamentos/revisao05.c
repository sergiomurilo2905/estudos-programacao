#include <stdio.h>

int main(){

int opcao, idade, cadastrado = 0;
char nome[50], matricula[40];

        printf("SISTEMA DE PESQUISA DE USUARIO\n");
        printf("\n");
do
{
    
        printf(" MENU INICIAL DE PESQUISA\n");
    printf("\n");
    printf("1 - CADASTRO DE USUARIO\n");
    printf("2 - CONSULTAR USUARIO\n");
    printf("3 - EXIBIR INFORMACOES\n");
    printf("4 - SAIR DO PROGRAMA\n");


    printf("Digite uma opcao: \n");
    scanf("%d", &opcao);

    switch (opcao)
{
    case 1:
    
        printf("Cadastro selecionado\n");
        printf("Digite o seu nome: \n");
        scanf(" %49[^\n]s", nome);
        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        printf("Digite sua matricula: \n");
        scanf(" %39[^\n]s", matricula);
        cadastrado = 1;

    break;

    case 2: 
        if ( cadastrado == 1)
    {
        printf("consultar cadastro selecionado\n");
        printf("o nome cadastrado foi: %s\n", nome);

    }
    
        else {
            printf ("usuario nao cadastrado\n");
        }
    
    break;
    
    case 3:
    if ( cadastrado == 1)
    {
        printf("consultar informacoes selecionado\n");
        printf("o nome cadastrado foi: %s\n", nome);
        printf("a idade cadastrada foi: %d\n", idade);
        printf("a matricula cadastrada foi: %s\n", matricula);
     }
    
        else {
            printf ("usuario nao cadastrado\n");
        }
        break;
    case 4:
        printf("encerrando programa\n");
        break;

default:
        printf("Opcao invalida\n");

    }
    
    

} while (opcao!=4);


return 0;
}  