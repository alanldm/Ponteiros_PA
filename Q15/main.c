#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b, float *vetor){
  if(vetor[a]>vetor[b]){
    return 1;
  } else if(vetor[a]<vetor[b]){
    return -1;
  } else {
    return 0;
  }
}

void troca(int a, int b, float *vetor){
  float aux;
  aux=vetor[a];
  vetor[a]=vetor[b];
  vetor[b]=aux;
}

void ordena(int n, float *vet, int(*verificador)(int a, int b, float *vetor)){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(verificador(i, j, vet)==1){
       troca(i, j, vet);
      }
    }
  }
}

int main(void) {
  int (*comparar)(int a, int b, float *vetor)=compare;
  int n;

  printf("Informe a quantidade de elementos do vetor:\n");
  scanf("%i", &n);

  float *numeros=malloc(n*sizeof(float));

  printf("Informe os valores do vetor:\n");
  for(int i=0; i<n; i++){
    scanf("%f", &numeros[i]);
  }

  printf("\n\nVetor antes da ordenação:\n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }

  ordena(n, numeros, comparar);

  printf("\n\nVetor depois da ordenação:\n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }

  free(numeros);
  
  return 0;
}