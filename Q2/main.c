int main(void) {
  //Dados da questão:
  int i=3, j=5;
  int *p,*q;
  p = &i;
  q = &j;
  //----------------

  //Proposições:
  p==&i; //O resultado esperado para essa expressão é "True", pois o que está acontecendo é uma comparação entre o valor do ponteiro e o valor do endereço de i, sendo esses iguais;

  *p-*q; //O resultado dessa expressão é a subtração entres os valores de p e q. Logo, o resultado esperado é -2;

  **&p; //O resultado esperado para essa expressão é 3. Isso se dá, pois (*(*(&p))), primeiro captura-se o valor armazenado no endereço de p (endereço de i) e em seguida procura-se o valor desse endereço (valor de i);

  3-*p/(*q)+7; //O resultado esperado é 10. Porque, muito embora o resultado, matematicamente, seja um número real, como os dois ponteiros são de inteiros, o valor resultante será forçado a ser 10 ("arredondamento"). 3 - 0 + 7 = 10;
  //----------------------------------------------------------------------------------
}