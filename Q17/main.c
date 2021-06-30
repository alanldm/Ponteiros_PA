#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função soma!
void soma_v(float *v1, float *v2, float *vr, int n){
  for(int i=0; i<n; i++){
    vr[i]=v1[i]+v2[i];
  }

  printf("A soma dos dois vetores é igual a: \n");
  printf("<");
  for(int i=0; i<n; i++){
    printf("%.2f ",vr[i]);
  }
  printf(">");
}


int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int n;
  float *v1=(float*)malloc(n*sizeof(float));
  float *v2=(float*)malloc(n*sizeof(float));
  float *vr=(float*)malloc(n*sizeof(float));
  void (*soma)(float*, float*, float*, int) = soma_v; //Ponteiro para funções!

  printf("Informe o número de elementos dos vetores: ");
  scanf("%i", &n);

  printf("\nInforme os valores do primeiro vetor: ");
  for(int i=0;i<n;i++){
    scanf("%f", &v1[i]);
  }

  printf("\nInforme os valores do segundo vetor: ");
  for(int i=0;i<n;i++){
    scanf("%f", &v2[i]);
  }

  soma(v1,v2,vr,n);
  
  free(v1);
  free(v2);
  free(vr);
}