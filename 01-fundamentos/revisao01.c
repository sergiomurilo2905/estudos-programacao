#include <stdio.h>

int main(){
int idade, matricula;
float altura, media, nota01, nota02, nota03;
char nome[50];

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite sua altura: \n");
scanf("%f", &altura);

printf("Digite o seu nome: \n");
scanf(" %49[^\n]s", nome);

printf("Digite sua matricula \n");
scanf("%d", &matricula);

printf("Digite nota01 \n");
scanf("%f", &nota01);

printf("Digite nota02 \n");
scanf("%f", &nota02);

printf("Digite nota03 \n");
scanf("%f", &nota03);

media= (nota01 + nota02 + nota03) / 3;

printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
printf("Idade: %d - Altura: %.2f\n", idade, altura);
printf("nota01: %.2f - nota02: %.2f - nota03: %.2f - Media: %.2F", nota01, nota02, nota03, media);

return 0;
}