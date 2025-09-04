#include <stdio.h>
#include <stdlib.h>

struct perso{
	 char nom[50];
	 char prenom[50];
	 int age;
};
    

int main(){
   struct perso p1={"zaki","rabi3i",21};	
	printf("votre nom : %s\n",p1.nom);
	printf("votre prenom : %s\n",p1.prenom);
	printf("votre age : %d\n",p1.age);
    return 0;
}