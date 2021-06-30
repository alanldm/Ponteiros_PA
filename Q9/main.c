#include <stdio.h>

//CÓDIGO 1
//Imprime os valores do vetor;
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
}

/*CÓDIGO 2
//Imprime os endereços de cada posição do vetor em hexadecimal;
int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}
*/