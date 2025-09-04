#include <stdio.h>

// Create a function
void calculateSum() {
  int x ;
  int y ;
  printf("donner votre premier nombre:");
  scanf("%d",&x);
  printf("donner le deuxieme nombre:");
  scanf("%d",&y);
  int sum = x + y;
  printf("Votre de %d + %d= %d",x,y, sum);
}

int main() {
  calculateSum();  // call the function
  return 0;
}