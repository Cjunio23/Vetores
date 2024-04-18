/*Considere um vetor de N números inteiros que não possui elementos repetidos e que contém apenas
números positivos.Implemente um programa que gera um vetor de ponteiros para os elementos do vetor de número
inteiros. Sendo que o primeiro elemento do vetor de ponteiros deve conter o endereço do maior número
do vetor de inteiros, o segundo elemento deve conter o endereço do segundo maior número do vetor de
inteiros e assim por diante.Para o vetor de inteiros mostrado acima, o vetor de ponteiros conteria os seguintes elementos.
0x14 0x20 0x04 0x00 0x24 0x10 0x1c 0x08 0x18 0x0c.
Após gerar o vetor de ponteiros. Exiba os elementos do vetor de números inteiros, em ordem decrescente,
utilizando o vetor de ponteiros (ou seja, percorra o vetor de ponteiros para exibir os números na ordem
decrescente). Observe que a primeira posição do vetor de ponteiros (0x14) aponta para o maior elemento
do vetor de inteiros, a segunda posição (0x20) aponta para o segundo maior e assim por diante. A ordem
dos números no vetor de inteiros não deve ser modificada. Outros vetores não podem ser criados.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
 int Numero, *aux, i, j, temp,  temp2, repetidos, tam;
  printf("--------------------------------------------------------------------------------------\n");
  printf("Tamanho do vetor: ");
  scanf("%d",&Numero);
   int v[Numero];//Tamnho do vetor que vai ser analisado
   int *vetor[Numero];//ponetiro de vetor para guarda os endereco.

   for(i=0; i<Numero; i++){//Numeros do vetor
    scanf("%d", &temp2);
      if(temp2 > 0){//Verificando se o numero e positivo.
        v[i] = temp2;
      }else{
          printf("Tente novamente\n");//Se tiver numero negativo ira fechar o programa.
          printf("Apenas numeros positivos e nao pode possui elementos repetidos\n");
          return 0;
      }
   }
     for(i=0; i<Numero; i++){
      vetor[i]=&v[i];
     }
      for (i = 0; i < Numero; i++) //pecorrer o vetor
        for (j = i+1; j < Numero; j++) {
        if(v[i] == v[j]){//comparando se tem elementos iguais
          printf("Tente novamente\n");//Se tiver numero repetido ira fechar o programa.
          printf("Apenas numeros positivos e nao pode possui elementos repetidos\n");
          return 0;
        }
       }
     for (i=0; i<Numero; i++){//Organaizaçao do vetor(professor passou)
       for (j= i+1; j<Numero; j++){
            if(*vetor[i]<*vetor[j]){
              aux=vetor[i];//trocando as posicao pra organiza
              vetor[i]=vetor[j];
              vetor[j]=aux;
           }
       }
   }

    printf("\n=**** VETOR ORIGINAL ****=\n");//Mostrando os vetores
    printf("[POSICAO] : [Elemento] --> [ENDERECO] \n");
  for (i = 0; i < Numero; i++){
      printf (" [%d] : [%d] --> [%d] \n", i , v[i], &v[i]);
  }
      printf("\n=**** VETOR ORDENADO ****=\n");//Mostrando os vetores organizados
  for (i = 0; i < Numero; i++){
      printf (" [%d] : [%d] --> [%d]\n",  i ,*vetor[i], vetor[i]);
  }

printf("--------------------------------------------------------------------------------------\n");
}
