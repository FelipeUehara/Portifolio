//Escrever no terminal, ler dados do usuário, armazenar e mostrar para o usuário.
//Inicializar librarys
#include<stdio.h>

void main(){
    //Inicializar variáveis
    char nome[20];
    int idade;

    //Escrita //Leitura //Escrita com dados da leitura //Mecher com os dados do usuário
    printf("Ola Mundo ! Qual seu nome?\n");
    scanf("%s",&nome);
    printf("Muito prazer %s qual a sua idade?\n",nome);
    scanf("%d",&idade);
    printf("Eu sou 10 anos mais velho, entao eu tenho %d anos\n",idade+10);

}