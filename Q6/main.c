#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5}; //Declaração de um vetor de 5 posições;
  float *f; //Declaração de um ponteiro de tipo float;
  int i; //Declaração da variável de controle para a estrutura de repetição;
  f = vet; //O ponteiro recebe o endereço do ponteiro (a primeira posição);
  printf("contador/valor/valor/endereco/endereco");
  //Laço de repetição para impressão dos resultados;
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i); //Printf para imprimir o atual valor da variável de controle;

  //As estruturas presentes nos "printf" das linhas 14 e 15 buscam apresentar os mesmos valores, porém com sintaxes diferentes. Desse modo, na linha 14, usa-se a sintaxe vet[i] para apresentar o valor da posição i do vetor. Analogamente, na linha 15, utiliza-se a sintaxe *(f+i) para localizar o valor de uma posição, tendo como referencia a primeira posição.
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));

  //As estruturas presentes nos "printf" das linhas 18 e 19 almejam expor os mesmos resultados, sendo esses os endereços das posições do vetor. Sendo assim, na linha 18, a sintaxe &vet[i] imprimirá o endereço daquela posição do vetor. Similarmente, a estrutura da linha 19, f+i, irá imprimir também o endereço de cada posição, porém sua lógica de funcionamento consiste em referenciar a posição com base na primeira posição. Vale ressaltar que nas duas situações os endereços serão incrementados de 4 em 4, pois cada float precisa de 4 bytes.
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
}
