//Bibliotecas utilizadas;
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  if(*(float*)a < *(float*)b){
    return -1; //Retorna -1, pois seria equivalente a dizer que a subtração entre a e b resultaria em um número menor que 0, ou seja, a < b;
  }else if(*(float*)a > *(float*)b){
    return 1; //Retorna 1, pois seria o equivalente a dizer que a subtração entre a e b resultaria em um número maior que 0, ou seja, a > b;
  }else{
    return 0; //Retorna 0, pois seria o equivalente a dizer que subtração entre a e b resultaria em 0, ou seja, os números seriam iguais.
  }
}

int main(void) {
  //Variável 'n' que representa o número de elementos do vetor.
  int n;

  printf("Informe o valor de n: "); //Solicita ao usuário o valor de n;
  scanf("%i", &n); //Lê o valor de n;

  //Vetor alocado dinamicamente através de um ponteiro que terá tamanho n*(tamanho de um float)
  float *numeros=(float*)malloc(n*sizeof(float));

  //Faz a leitura dos elementos do vetor
  for(int i=0; i<n; i++){
    scanf("%f", &numeros[i]);
  }

  //Imprime os números digitados
  printf("Vetor após leitura: \n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }

  //Função para ordenação;
  qsort(numeros, n, sizeof(float), compare);

  //Imprime o vetor ordenado
  printf("\n\nVetor após ordenacao: \n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }

  //Libera a memória do vetor 'numeros'.
  free(numeros);

  return 0;
}