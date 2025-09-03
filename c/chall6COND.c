#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 int N;
 printf("donner un nombre n : ");
 scanf("%d",&N);
  if(N<0){
  	printf("le nombre %d est negative ",N);
  }
  else if (N>0){ 
  printf("le nombre %d est positif ",N);
  }
  else
    printf("null ");
  return 0;
}