#include <stdio.h>
int main(){
char nome[100];
char idade[10];
char matricula[20];
char endereço[200];
char curso[100];
char periodo[50];
 char disciplinas[200];

    printf("Nome Usuario: %s",nome);
    fgets(nome, 100, stdin);
    scanf("%[^\n]",nome);
    
    printf("Idade do usuario: %s", idade);
    fgets(idade, 100, stdin);
    scanf("%[^\n]",idade);

    
    printf("Matricula do Usuario: %s", matricula);
    fgets(matricula, 10, stdin);
    scanf("%[^\n]",matricula);
    
    printf("Endereço do usuario: %s", endereço);
    fgets(endereço, 200, stdin);
    scanf("%[^\n]",endereço);
    
    printf("Curso do usuario: %s", curso);
    fgets(curso, 100, stdin);
    scanf("%[^\n]",curso);
    
     printf("período do usuario: %s", periodo);
    fgets(periodo, 50, stdin);
    scanf("%[^\n]",periodo);
    
    printf("disciplinas do usuario: %s", disciplinas);
    fgets(disciplinas, 200, stdin);
    scanf("%[^\n]",disciplinas);

}