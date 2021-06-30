#include <stdio.h>

int main(void) {
  int i, j, *p, *q; //Declaração de 2 variáveis inteiras e 2 ponteiros para inteiros;
  //p=&i; //Válido, pois o ponteiro para inteiro p está recebendo o endereço da variável inteira i;
  //*q=&j; //Válido. O valor de q está recebendo o valor do endereço de j. Ressalta-se que o endereço está sendo armazenado como um inteiro;
  //p=&*&i; //Válido. p está recebendo o endereço do valor armazenado no endereço de i, ou seja, resgata o valor de i;
  //i=(*&)j; //Inválido! Há um problema de sintaxe, pois há uma tentativa de se passar um valor de um endereço, porém não é informado de "quem" é esse endereço. O problema seria solucionado caso os parêntesis fossem removidos;
  //i=*&j; //Válido, pois i está recebendo o valor inteiro armazenado no endereço de j;
  //i=&&j; //Inválido! Nessa expressão, tenta-se atribuir a i o endereço do endereço de j, no entanto esse suposto endereço não existe;
  //q=*p; //Válido, pois o ponteiro de inteiros q recebe o valor de um ponteiro inteiro. 
  //i=(*p)+*q; //Válido! Nessa expressão, o inteiro i recebe a soma entre os valores dos ponteiros p e q;
}