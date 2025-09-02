#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float r,volume;
 printf("donner votre rayon de sphere");
 scanf("%f",&r);
 volume= (4.0/3.0) * 3.141 * pow(r,3);
 printf("le volume de votre rayon est %.2f",volume);
	return 0;
}