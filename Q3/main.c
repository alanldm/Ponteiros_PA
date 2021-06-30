#include <stdio.h>

int main(void) {
  int i=5, *p; //Declaração da variável i e o ponteiro para inteiro p;
  p = &i; //p recebe o endereço de i;
  printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4); //Impressão dos valores;
  /*Os resultados impressos foram respectivamente:
  4094 (Endereço hexadecimal do ponteiro p);
  7 (Valor armazenado pelo endereço apontado por p somado 2: 5+2=7);
  5 (Valor armazenado pelo endereço apontado por p: 5);
  15 (Valor armazenado pelo endereço apontado por p vezes 3: 5*3=15);
  9 (Valor armazenado pelo endereço apontado por p somado 4: 5+4=9);
  */
}