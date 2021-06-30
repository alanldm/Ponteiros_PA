#include <stdio.h>

int main(void) {
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i=3;
  
  aloha[2]=value; //Válido a posição 2 do vetor está recebendo o valor de value (2.2);
  scanf("%f", &aloha); //Válido, lê um valor e armazena na primeira posição do vetor;
  aloha = "value";  //Inválido, pois "aloha" é um array de pontos flutuantes e, nessa expressão, tenta-se armazenar uma string nele;
  printf("%f", aloha); // Válido, porém será impresso 0.0, pois não se foi indicada uma posição do vetor;
  coisas[4][4]=aloha[3]; //Válido, a matriz "coisas" recebe no elemento 4x4 o valor do 4º elemento de "aloha";
  coisas[5]=aloha; //Inválido, pois a sintaxe da matriz está incorreta, haja vista que nessa situação está havendo uma tentativa de se passar o vetor "aloha" na 5° linha da matriz "coisas"; coisas[i][j];
  pf = value; //Inválido, porque "pf" precisa receber um endereço para apontar, no entanto,nessa situação, um valor float está sendo passado;
  pf = aloha; //Válido, o ponteiro "pf" está recebendo o endereço do primeiro elemento do array "aloha";

  return 0;
}