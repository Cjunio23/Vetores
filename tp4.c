/*Implemente a fun�ao,char *strstr (char *str1, char *str2)� que retorna o endere�o de str1 em que ocorre pela primeira vez a
substring str2. Caso a substring str2 n�o exista em str1, retorne NULL. Implemente o programa principal
para testar a fun��o. No programa principal, voc� deve exibir o endere�o do primeiro caracter de str1 e
tamb�m o endere�o de str1 a partir do qual existe uma ocorr�ncia de str2.*/
//str1,mostrar o endere�eo do str1 na posicao 0
//mostrar o endere�o da primeira palavra na posi�ao 0 e o segundo endere�o que e o da palavra que voce esta procurando.
//exibir 2 endereco no final.Do inicio da frase e o da palavra que esta sendo procurada.
//Se caso a segunda parte da procura nao exista,exibir null = vazio.
//char = 1 byte
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ende(char *str1,char *str2)//Tive que trocar o nome,porque tem uma funcao com o nome strstr.
//funcao strstr A fun��o strstr devolve um ponteiro para a primeira ocorr�ncia da string apontada por endere�oStrChave na string apontada por endere�oStrOrigem.
// Ela devolve um ponteiro nulo de n�o for encontrada nenhuma coincid�ncia.
{
    int tam, i=0, j=0, tamanho_str2 = strlen(str2);//tamanho da str2 igual a srtlen do str2,para ler o tamanho da string.
    char *ponteiro;
    for(i=0; i<strlen(str1); i++)//Para pecorer toda a string.
    {
        if(str1[i]==str2[j])//os 2 na posi�ao inicial.
        {
            if(j==0)//se j for igual a 0,ponteiro igual a str1 na posicao inicial.
            {
             ponteiro=&str1[i];
            }
            j++;
        }
        else
        j=0;//atribuindo
        if(j==tamanho_str2)//j for igual ao tamanho da str2,imprimir o tamnho e retorna o ponteiro.
        {
            printf("Tamanho da palavra: %d\n",tamanho_str2);//Tamanho da string,conta os caracter.
            return ponteiro;
        }
    }
    if(j!=tamanho_str2)
        return NULL;
}
int main()
{
    char *caracter, str1[1000],  str2[1000];
    printf("--------------------------------------------------------------------------------------\n");
    printf("Digite uma frase: ");
    gets(str1);//Pegar o caracter.
    printf("--------------------------------------------------------------------------------------\n");
    printf("Digite a palavra que deseja pesquisa: ");
    gets(str2);//Pega o caracter que deseja ser procurado.
    caracter = ende(str1,str2);
     if(caracter!=NULL)//Caso for diferente de nulo,tenha encontrado a palavra digitada.
     {   printf("Endereco do primeiro caracter: %d\n",str1);//Mostra o endereco do primeiro caracter str1[i]
         printf("endereco da primeira ocorrencia: %d\n",caracter);//endere�o de str1 a partir do qual existe uma ocorr�ncia de str2.
         printf("Caracter: %c\n",*caracter);//O primeiro caracter.
     }
     else
        printf("**Nao encontrado**\n");//Caso a palavra digitada nao seja encontrada.Imprmi nao encontrado.
printf("--------------------------------------------------------------------------------------\n");
}
