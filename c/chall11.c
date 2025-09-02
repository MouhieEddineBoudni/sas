#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float surface,longeur,largeur;
 printf("donner votre longeur de rec :");
 scanf("%f",&longeur);
 printf("donner votre largeur de rec :");
 scanf("%f",&largeur);
 surface= longeur * largeur;
 printf("votre surface de rec est %.2f",surface);
	return 0;
}