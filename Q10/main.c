#include <stdio.h>

int main(void) {
  //Posição:     x   x+1   x+2   x+3
  //int:      4092  4094  4096  4098
  //float:    4092  4096  4100  4104
  //char:     4092  4093  4094  4095
  //double:   4092  4100  4108  4116

  int i[4];
  float f[4];
  char c[4];
  double d[4];

  for(int k; k<4; k++){
    printf("Endereço i[%i] = %x\n",k, i+k);    
  }

  printf("\n");

  for(int k; k<4; k++){
    printf("Endereço f[%i] = %x\n",k, f+k);   
  }

  printf("\n");

  for(int k; k<4; k++){
    printf("Endereço c[%i] = %x\n",k, c+k);   
  }

  printf("\n");

  for(int k; k<4; k++){
    printf("Endereço d[%i] = %x\n",k, d+k);   
  }

  //Tudo funcionou como esperado, no entanto, o vetor do tipo inteiro apresentou uma pequena diferença. Essa diferença se deu, pois na máquina em que o código foi rodado o tipo inteiro tem 4bytes. Logo, os endereços não pularam de 2 em 2 bytes no código. 
}