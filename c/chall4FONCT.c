#include <stdio.h>


void min() {
  int x ;
  int y ;
  printf("donner votre premier nombre:");
  scanf("%d",&x);
  printf("donner le deuxieme nombre:");
  scanf("%d",&y);
  if(y<x){
  	printf("%d est le min entre les deux nombre ",y);
  } else{
  	 printf("%d est le min entre les deux nombre ",x);
  }
}

int main() {
  min();  
  return 0;
}