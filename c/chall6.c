#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float a,b;
 printf("donner un nombre reel ");
 scanf("%f",&a);
 printf("donner le 2eme nombre ");
 scanf("%f",&b);
  printf("a + b =%.2f",a+b);
  printf("a - b =%.2f",a-b);
  printf("a * b =%.2f",a*b);
  if(b != 0)
   printf("a / b =%.2f",a/b);
    else 
     printf("la div en b est impossible");
	return 0;
}