#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função para ordenar conforme a questão 13.
void ordena_q13(int n, float *numeros){
  float aux;

  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(numeros[j]<numeros[i]){
       aux = numeros[j];
       numeros[j]=numeros[i];
       numeros[i]=aux; 
      }
    }
  }

  printf("\n\nVetor ordenado na Q13:\n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }
}
//------------------------------------------------

//Ordenação conforme a questão 14
int compare(const void *a, const void *b){
  if(*(float*)a < *(float*)b){
    return -1; 
  }else if(*(float*)a > *(float*)b){
    return 1;
  }else{
    return 0; 
  }
}


void ordena_q14(int n, float *numeros){
  qsort(numeros, n, sizeof(float), compare);
  printf("\n\nVetor ordenado na Q14:\n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }
}
//------------------------------------------------

//Ordenação conforme a questão 15
int compare2(int a, int b, float *vetor){
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

void ordena_q15(int n, float *numeros){
  int (*comparar)(int a, int b, float *vetor)=compare2;
  ordena(n, numeros, comparar);

  printf("\n\nVetor ordenado na Q15:\n");
  for(int i=0; i<n; i++){
    printf("%.2f ", numeros[i]);
  }
}
//-------------------------------------------------------------------------------

int main(void) {
  clock_t tempo;
  int n;

  printf("Informe o número de elementos do vetor: \n");
  scanf("%i", &n);

  float *vetor=malloc(n*sizeof(int));
  float *vetor_13=malloc(n*sizeof(int));
  float *vetor_14=malloc(n*sizeof(int));
  float *vetor_15=malloc(n*sizeof(int));

  printf("\n\nInforme os elementos do vetor: \n");
  for(int i=0; i<n; i++){
    scanf("%f", &vetor[i]);
  }

  printf("\n\nVetor antes da ordenação: \n");
  for(int i=0; i<n; i++){
    printf("%.2f ", vetor[i]);
  }

  for(int i=0; i<n; i++){
    vetor_13[i]=vetor[i];
    vetor_14[i]=vetor[i];
    vetor_15[i]=vetor[i];
  }

  tempo=clock();
  ordena_q13(n, vetor_13);
  tempo=clock()-tempo;
  printf("\nTempo de execucao usando a Q13: %1f ms!\n", ((double)tempo)/((CLOCKS_PER_SEC)/1000));

  tempo=clock();
  ordena_q14(n, vetor_14);
  tempo=clock()-tempo;
  printf("\nTempo de execucao usando a Q14: %1f ms!\n", ((double)tempo)/((CLOCKS_PER_SEC)/1000));

  tempo=clock();
  ordena_q15(n, vetor_15);
  tempo=clock()-tempo;
  printf("\nTempo de execucao usando a Q15: %1f ms!\n", ((double)tempo)/((CLOCKS_PER_SEC)/1000));

  return 0;
}