#include <stdio.h>
#include <stdlib.h>

struct etud{
	 char nom[50];
	 char prenom[50];
	 int note[5];
};
    

int main(){
   struct etud p1={"zaki","rabi3i",{10,2,6,3,4}};	
	printf("votre nom : %s\n",p1.nom);
	printf("votre prenom : %s\n",p1.prenom);
	printf("notes: ");
	for(i=0;i<5;i++){
		printf("%d",p1.note[i]);
	}
    return 0;
}