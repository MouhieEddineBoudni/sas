#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 int n;
 printf("donner un nombre : ");
 scanf("%d",&n);
  if(n % 2 == 0)
   printf("le nombre %d est pair",n);
  else
   printf("le nombre %d est impair",n);
	return 0;
}