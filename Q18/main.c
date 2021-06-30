#include <stdio.h>
#include <stdlib.h>

void cria(int **matriz, int l, int c){
  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
      scanf("%i", &matriz[i][j]);
    }
  }
}

void imprime(int **matriz, int l, int c){
  for(int i=0; i< l; i++){
    for(int j=0; j< c; j++){
      printf("%i  ", matriz[i][j]);
    }
    printf("\n");
  }
}

void multiplicacao(int **A, int **B, int **C, int al, int ac, int bc){
  for(int i=0; i< al; i++){
    for(int j=0; j< bc; j++){
      for(int k=0; k< ac; k++){
        C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
      }
    }
  }
}

int main(void) {
  int x=1,y=3,z=5;

  int **A=malloc(x*sizeof(int*));
  A[0]=malloc(x*y*sizeof(int));

  int **B=malloc(y*sizeof(int*));
  B[0]=malloc(y*z*sizeof(int));

  int **C=malloc(x*sizeof(int*));
  C[0]=malloc(x*z*sizeof(int));

  for(int i=1; i<x; i++){
    A[i]=A[i-1]+y;
  }
  for(int i=1; i<y; i++){
    B[i]=B[i-1]+z;
  }
  for(int i=1; i<x; i++){
    C[i]=C[i-1]+z;
  }

  printf("Informe os valores de A: \n");
  cria(A, x, y);
  printf("Informe os valores de B: \n");
  cria(B, y, z);

  multiplicacao(A, B, C, x, y, z);

  printf("A matriz A é: \n");
  imprime(A, x, y);

  printf("\n\nA matriz B é: \n");
  imprime(B, y, z);

  printf("\n\nA matriz C é: \n");
  imprime(C, x, z);
  
  free(A[0]);
  free(B[0]);
  free(C[0]);

  free(A);
  free(B);
  free(C);
}