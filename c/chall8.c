#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float a,b,c,moyennegeo;
 printf("donner les trois nombre");
 scanf("%f%f%f",&a,&b,&c);
 moyennegeo= cbrt(a*b*c);
 printf("la moyennegeo est : %.2f",moyennegeo);
  
	return 0;
}