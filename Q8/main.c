#include <stdio.h>

int main(void) {
  int mat[4], *p, x;
  p=mat+1; //Válida, passa-se para o ponteiro "p" o endereço da segunda posição (índice 1) do vetor mat;
  p=mat; //Válida, passa-se para o ponteiro "p" o endereço da primeira posição (índice 0) do vetor mat;
  p=mat; //Válida, passa-se para o ponteiro "p" o endereço da primeira posição (índice 0)do vetor mat;
  x=(*mat); //Válida, "x" recebe o valor da primeira posição do vetor "mat";
}