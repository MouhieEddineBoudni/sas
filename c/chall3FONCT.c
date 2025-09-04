#include <stdio.h>


void comp() {
  int x ;
  int y ;
  printf("donner votre premier nombre:");
  scanf("%d",&x);
  printf("donner le deuxieme nombre:");
  scanf("%d",&y);
  if(y>x){
  	printf("%d est le plus grand",y);
  }else{
  	printf("%d est le plus grand",x);
  }
}

int main() {
  comp();  
  return 0;
}