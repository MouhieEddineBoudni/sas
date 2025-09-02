#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float ms,kmh;
 printf("donner votre vitesse en kmh ");
 scanf("%f",&kmh);
 ms = kmh * 0.27778;
 printf("votre distance en km est: %.2f ",ms);
	return 0;
}