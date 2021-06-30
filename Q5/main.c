#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;

  /* (a) */
  //Utilizando ponteiro, troca-se o valor da variável "valor" para 20.
  valor = 10; //"valor" incialmente tem valor 10.
  p1 = &valor; //O ponteiro "p1" recebe o endereço de "valor".
  *p1 = 20; //O valor armazenado no endereço apontado por "p1" é modificado para 20, ou seja, "valor" muda para 20.
  printf("%d \n", valor);

  /* (b) */
  //Analogamente a letra 'a', modifica-se o valor da variável "temp", por meio do ponteiro "p2".
  temp = 26.5; //"temp" recebe 26.5.
  p2 = &temp; //"p2" recebe o endereço de "temp".
  *p2 = 29.0; //"temp" é modificado através de "p2" para 29.
  printf("%.1f \n", temp);

  /* (c) */
  p3 = &nome[0]; //O ponteiro "p3" recebe o endereço da primeira posição (índice 0) do vetor de caractere.
  aux = *p3; //O valor apontado por "p3" é passado para a variável "aux", ou seja, 'P'.
  printf("%c \n", aux); //Imprime 'P'.

  /* (d) */
  p3 = &nome[4]; //O ponteiro "p3" recebe o endereço da quinta posição (índice 4) do vetor "nome". 
  aux = *p3; //"aux" recebe o valor apontado pelo endereço armazenado no ponteiro "p3"
  printf("%c \n", aux); //Imprime 'e'.

  /* (e) */
  p3 = nome; //O ponteiro "p3" recebe o endereço da primeira posição (índice 0) do vetor "nome".
  printf("%c \n", *p3); //Imprime 'P'.

  /* (f) */
  p3 = p3 + 4; //O novo endereço armazenado no ponteiro "p3" será o da quinta posição do vetor "nome" (índice 4).
  printf("%c \n", *p3); //Imprime o elemento da quinta posição, ou seja, 'e'.

  /* (g) */
  p3--; //O endereço que "p3" aponta é decrementado em 1, dessa forma, estará apontando para o 't'.
  printf("%c \n", *p3); //Imprime 't'.

  /* (h) */
  vetor[0] = 31; //Atribui o valor 31 a primeira posição do vetor.
  vetor[1] = 45; //Atribui o valor 45 a segunda posição do vetor.
  vetor[2] = 27; //Atribui o valor 27 a terceira posição do vetor.
  p4 = vetor; //O ponteiro "p4" recebe o endereço da primeira posição de "vetor".
  idade = *p4; //A variável "idade" recebe o valor que "p4" aponta, ou seja, 31.
  printf("%d \n", idade); //Imprime 31.

  /* (i) */
  p5 = p4 + 1; //"p5" recebe o endereço que "p4" aponta somado 1, ou seja, aponta para a segunda posição do vetor "vetor" (índice 1).
  idade = *p5; //A variável "idade" recebe o valor apontado por "p5".
  printf("%d \n", idade); //Imprime 45.

  /* (j) */
  p4 = p5 + 1; //"p4" recebe o endereço que "p5" aponta somado 1, ou seja aponta a última posição de "vetor".
  idade = *p4; //"idade" recebe "vetor[2]" (27).
  printf("%d \n", idade); //Imprime 27.

  /* (l) */
  p4 = p4 - 2; //O novo endereço que "p4" aponta é o anterior dele decrementado 2. Logo, aponta para "vetor[0]".
  idade = *p4; //"idade" recebe o valor que "p4" aponta: 31.
  printf("%d \n", idade); //Imprime 31.

  /* (m) */
  p5 = &vetor[2] - 1; //"p5" recebe o endereço da última posição do vetor "vetor" menos 1. Ou seja, recebe o endereço de vetor[1].
  printf("%d \n", *p5); //Imprime 45 (valor de vetor[1]).

  /* (n) */
  p5++; //O endereço que "p5" aponta é incrementado em 1. Logo, o ponteiro "p5" agora aponta para vetor[2] (27).
  printf("%d \n", *p5); //Imprime 27.

  return(0);
}
