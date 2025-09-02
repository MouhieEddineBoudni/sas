#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nom[30],prenom[30],sexe[30],email[50];
    int age;
    printf("donner votre nom:");
    scanf("%s",&nom);
    printf("donner votre prenom:");
    scanf("%s",&prenom);
    printf("donner votre sexe:");
    scanf("%s",&sexe);
    printf("donner votre email:");
    scanf("%s",&email);
    printf("donner votre age:");
    scanf("%d",&age);
   
   printf("prenom:%s\nnom:%s\nsexe:%s\nemail:%s\nage:%d\n",prenom,nom,sexe,email,age);
	return 0;
}