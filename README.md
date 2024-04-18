# Vetores
1) “char *strstr (char *str1, char *str2)” que retorna o endereço de str1 em que ocorre pela primeira vez a
substring str2. Caso a substring str2 não exista em str1, retorne NULL. Implemente o programa principal
para testar a função. No programa principal, você deve exibir o endereço do primeiro caracter de str1 e
também o endereço de str1 a partir do qual existe uma ocorrência de str2.
2) Considere um vetor de N números inteiros que não possui elementos repetidos e que contém apenas
números positivos. Exemplo: 
10 12 5 2 8 23 3 7 18 9
0x00 0x04 0x08 0x0C 0x10 0x14 0x18 0x1C 0x20 0x24
Os números abaixo de cada elemento do vetor correspondem aos endereços de memória de cada
elemento. 
Implemente um programa que gera um vetor de ponteiros para os elementos do vetor de número
inteiros. Sendo que o primeiro elemento do vetor de ponteiros deve conter o endereço do maior número
do vetor de inteiros, o segundo elemento deve conter o endereço do segundo maior número do vetor de
inteiros e assim por diante. 
Para o vetor de inteiros mostrado acima, o vetor de ponteiros conteria os seguintes elementos. 
0x14 0x20 0x04 0x00 0x24 0x10 0x1c 0x08 0x18 0x0c
Após gerar o vetor de ponteiros. Exiba os elementos do vetor de números inteiros, em ordem decrescente,
utilizando o vetor de ponteiros (ou seja, percorra o vetor de ponteiros para exibir os números na ordem
decrescente). Observe que a primeira posição do vetor de ponteiros (0x14) aponta para o maior elemento
do vetor de inteiros, a segunda posição (0x20) aponta para o segundo maior e assim por diante. A ordem
dos números no vetor de inteiros não deve ser modificada. Outros vetores não podem ser criados.
3) Implemente um programa que preenche aleatoriamente dois vetores Q e R com 12 e 20 elementos
inteiros (valores repetidos ou não) respectivamente. Implemente um procedimento que recebe os vetores
Q, R e um terceiro vetor W. O procedimento deverá preencher o vetor W com a interseção de Q e R. Além
disto, W não poderá conter elementos repetidos. Exiba o conteúdo do vetor W no programa principal.
Utilize a função malloc para os vetores Q e R. Utilize a função realloc toda vez que um elemento for inserido
no vetor W. Não utilize variáveis globais
