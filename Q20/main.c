#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"

int main(void) {
  clock_t tempoi, tempof, tempo_i, tempo_f;
  int *teste;
  long int k =10000000;

  tempoi=clock();
  for(long int i=0; i<k; i++){
    teste=malloc(sizeof(int));
    free(teste);
  }
  tempof=clock()-tempoi;

  printf("Tempo de execução para alocação dinâmica comum: %1f ms", ((double)tempo)/(CLOCKS_PER_SEC/1000));

  tempo_i=clock();
  for(long int i=0; i<k; i++){
    teste= GC_MALLOC(sizeof(int));
  }
  tempo_f=clock()-tempo_i;

  printf("Tempo de execução para alocação dinâmica com a biblioteca libgc: %1f ms", ((double)tempo)/(CLOCKS_PER_SEC/1000));
  return 0;
}