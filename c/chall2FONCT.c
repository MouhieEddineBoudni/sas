#include <stdio.h>


void multi() {
  int x ;
  int y ;
  printf("donner votre premier nombre:");
  scanf("%d",&x);
  printf("donner le deuxieme nombre:");
  scanf("%d",&y);
  int multip = x * y;
  printf("la multi de  %d * %d= %d",x,y, multip);
}

int main() {
  multi();  
  return 0;
}