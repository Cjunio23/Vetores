/* Implemente um programa que preenche aleatoriamente dois vetores Q e R com 12 e 20 elementos
inteiros (valores repetidos ou não) respectivamente. Implemente um procedimento que recebe os vetores
Q, R e um terceiro vetor W. O procedimento deverá preencher o vetor W com a interseção de Q e R. Além
disto, W não poderá conter elementos repetidos. Exiba o conteúdo do vetor W no programa principal.
Utilize a função malloc para os vetores Q e R. Utilize a função realloc toda vez que um elemento for inserido
no vetor W. Não utilize variáveis globais*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

bool verificar(int num,int tamanho,int *v3){
	int i;
	for(i=0;i<tamanho;i++){
		if(v3[i]==num){
         return false;//retorna false se o num que foi passado de parametro na função já pertence a intercessao
		}
	}
	return true;//retorna true se num passado de parãmetro para a função não pertence ainda a intercessao
}

int *inVetor(int *v1,int *v2,int * intersecao){//Funcao para pegar as interseçao
	int i,j;
	int *v3;//intersecao
	v3=(int*)malloc(sizeof(int));//alocando o v3(intersecao)
	for(i=0;i<12;i++){//percorre o vetor Q
		for(j=0;j<20;j++){//percorre o vetor R
			if(v1[i]==v2[j]){//Sse for igual ira verificar
                    if(verificar(v1[i],*intersecao,v3)==true){//Verificar se tem numero repetidos.
				if(* intersecao==0){//Pegando os elemntos da intesercao sem elemento repetido.
					v3[*intersecao]=v1[i];
				}else{
					v3=(int*)realloc(v3,*intersecao*(sizeof(int)));//realocando o v3(intersecao)
					v3[* intersecao]=v1[i];
				}
				*intersecao=* intersecao+1;//adicionando
			}
           }
		}
	}
	return v3;
}

int main(){
	int *Q =(int*) malloc(12*sizeof(int));//Alocando o Q
	int *R =(int*) malloc(20*sizeof(int));//Alocando o R
	int *intersecao;
	int i, aux=0;
	intersecao=&aux;

	srand(time(NULL));//Preencher vetor(professor passou na aula)
	for(i=0;i<12;i++){
		Q[i]=rand()%99;//Vetor q
	}
	for(i=0;i<20;i++){
		R[i]=rand()%99;//Vetor w
	}
    printf("--------------------------------------------------------------------------------------\n");
    printf("Primeiro Vetor(Q)\n");
	for(i=0;i<12;i++){//Percorrer o primeiro vetor de 12 numeros
		printf("%d ",Q[i]);//exibindo o vetor Q depois de ser preenchidos
	}
	printf("\n--------------------------------------------------------------------------------------\n");
    printf("Segundo Vetor(R)\n");
	for(i=0;i<20;i++){//Percorrer o segundo vetor de 20 numeros
		printf("%d ",R[i]);//exibindo o vetor R depois de ser preenchidos
	}
	printf("\n--------------------------------------------------------------------------------------\n");
	printf("Intersecao de Q e R(W)\n");
	int *W = inVetor(Q,R,intersecao);//Pegando as interseçao do vetor q e r(Nao pode pegar de numeros repetidos)
	for(i=0;i<*intersecao;i++){//Percorreno o vetor
		printf("%d ",W[i]);
	}
    printf("\n--------------------------------------------------------------------------------------\n");
}
