#include <stdio.h>

int main(void) {
  int pulo[5] = {1, 2, 3, 4, 5}; //Declaração de um vetor genérico.
  //             0  1  2  3  4   Posições do vetor

  //IMPRIMIRÁ O TERCEIRO ELEMENTO DO VETOR: *(pulo+2)
  printf("%i\n", *(pulo+2)); //Imprimirá o valor do terceiro elemento (3) do vetor;
  //-------------------------------------------------

  //NÃO IMPRIMIRÃO O TERCEIRO ELEMENTO DO VETOR:
  printf("%i\n", *(pulo+4)); //Imprimirá o valor do quinto elemento (5) do vetor;
  printf("%p\n", pulo+2); //Imprimirá o endereço da posição 1 do vetor.
  printf("%p\n", pulo+4); //Imprimirá o endereço da posição 3 do vetor.

  return 0;
}