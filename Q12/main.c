#include <stdio.h>
#include <locale.h>

/*Um ponteiro para uma função é um ponteiro que aponta para o endereço de uma determinada função. Desse modo, para que ele possa cumprir com sua finalidade, o ponteiro para uma função deve ser declarado da seguinte forma:
tipo_do_retorno (*nome_do ponteiro_para_funcao)(tipos_dos_parametros) = funcao_que_aponta
Esses ponteiros podem ser utilizados para executar determinadas funções em tempo de execução, evitando com que se tenha que digitar o nome da função em um determinado trecho do código. Nesse sentido, os ponteiros para funções, no geral, facilitam a chamada de funções nos códigos e flexibilitam a relação entre funções, uma vez que podem ser passados também como parâmetros.
*/

//Função que simula uma calculadora simplificada. Essa função recebe como parâmetros 2 números reais e um caracter que representa a operação.
float mini_calc(float a, float b, char op){
  switch (op){
    //Operação de soma.
    case '+':
    return a+b;
    break;

    //Operação de subtração.
    case '-':
    return a-b;
    break;

    //Operação de multiplicação.
    case '*':
    return a*b;
    break;

    //Operação de divisão.
    case '/':
    return a/b;
    break;
    
    default:
      printf("Não é uma operação válida!\n");
  }
  return 0;
}

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  //O ponteiro para função "calc", assim como a função para qual ele vai apontar, deve retornar um número real e receber como parâmetros 2 números reais e um caracter.
  float (*calc)(float, float, char)=mini_calc;
  float x=1, y=2;

  //Apresenta o resultado das operações entre x e y.
  printf("x + y = %.2f\n",calc(x,y,'+'));
  printf("x - y = %.2f\n",calc(x,y,'-'));
  printf("x * y = %.2f\n",calc(x,y,'*'));
  printf("x / y = %.2f\n",calc(x,y,'/'));

  return 0;
}