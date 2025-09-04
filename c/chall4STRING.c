#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char str1[20];
    char str2[20];
    printf("donner une chaine de char:");
    scanf("%s",&str1);
    printf("donner une deuxieme chaine de char:");
    scanf("%s",&str2);
    printf("%d\n", strcmp(str1, str2));
    return 0;
}