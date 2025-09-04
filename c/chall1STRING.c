#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
	char chain[100];
	printf("donner une chain de character");
	fgets(chain,sizeof(chain),stdin);
	printf("vous aves entre une chaine %s:",chain);
 
	return 0;
}