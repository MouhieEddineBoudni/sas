#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float km,yards;
 printf("donner votre distqnce en km ");
 scanf("%f",&km);
 yards = km * 1093.61;
 printf("votre distance en yards est: %.2f ",yards);
	return 0;
}