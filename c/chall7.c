#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float moyenne,n1,n2,n3;
  printf("donner les 3 nombre :");
  scanf("%f",&n1);
  scanf("%f",&n2);
  scanf("%f",&n3);
  moyenne= (n1*2 + n2*3 + n3*5)/(2+3+5);
  printf("votre moyenne est %.2f",moyenne);
  
	return 0;
}