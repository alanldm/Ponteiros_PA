//Bibliotecas utilizadas;
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //Variável 'n' que representa o número de elementos do vetor.
  int n;

  //Leitura do tamanho do vetor
  printf("Informe o valor de n: ");
  scanf("%i", &n);

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

  //Variável auxiliar utilizada para ordenação do vetor
  float aux;

  //Ordenação do vetor
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(numeros[j]<numeros[i]){
       aux = numeros[j];
       numeros[j]=numeros[i];
       numeros[i]=aux; 
      }
    }
  }

  //Imprime o vetor ordenado
  printf("\n\nVetor após ordenacao: \n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }

  free(numeros);
  return 0;
}