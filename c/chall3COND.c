#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 int a,b;
 printf("donner deux nombre ent a est b :");
 scanf("%d %d",&a,&b);
 if(a == b)
  printf("resultat = %d ", 3 * (a+b));
 else 
  printf("resultat = %d ", a+b );
  return 0;
}