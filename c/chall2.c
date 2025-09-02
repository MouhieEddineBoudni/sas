#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float K,C;
 printf("donner votre temp Cel");
 scanf("%f",&C);
 K = C + 273.15;
 printf("votre temp en klev est: %.2f ",K);
 
	return 0;
}