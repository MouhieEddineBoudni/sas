#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
 
int main() {
	
   char titre[MAX][50];
   char auteur[MAX][50];
   int quantite[MAX];
   int nblivre=0;
   float prix[MAX];
   int choix;
   
  do{
  	 printf("\n-- le menu de system --\n");
  	 printf("clicker sur 1 pour ajoute  un livre\n");
  	 printf("clicker sur 2 pour affiche un livre\n");
  	 printf("clicker sure 3 pour recherche un livre\n");
  	 printf("clicker sure 4 pour metre ajour un livre\n");
  	 printf("clicker sur 5 pour suprime un livre\n");
  	 printf("clicker sure 6 pour affiche le nombre total des livres\n");
  	 printf("clicker sur 0 pour quite le menu\n");
  	 printf("votre choix: ");
  	 scanf("%d",&choix);
  	 
  	  if(choix == 1){
  	  	  if(nblivre >= MAX) {
  	  	  	printf("le stock est plein impossible dajouter autre livre");
			  } else{
			  	printf("entre le nom de livre : ");
			  	scanf(" %[^\n] ",titre[nblivre]);
			  	printf("entre le nom de lauture: ");
			  	scanf(" %[^\n] ",auteur[nblivre]);
			  	while(getchar() != '\n');
			  	printf("entre le prix de livre: ");
			  	scanf("%f",&prix[nblivre]);
			  	while(getchar() != '\n');
			  	printf("entre le quantite de stock: ");
			  	scanf("%d",&quantite[nblivre]);
			  	while(getchar() != '\n');
			  	nblivre++;
			  	printf("livre est ajute avec succes ! \n");
			  }
		}
  	  else if(choix == 2){
  	  	    if(nblivre == 0){
  	  	  	  printf("aucune livre est on stock \n:");
			  } else{
			  	 printf("\n-- liste des livre disponible--\n");
			  	  for(int i=0 ; i<nblivre ;i++){
			  	  	 printf("titre : %s | auteur: %s | prix : %.2f | quantite: %d \n ",titre[i],auteur[i],prix[i],quantite[i]);
					}
			  	
			  }
		}
		else if(choix == 3){
			char titreRecherche[50];
		     printf("entre le nom de titre recherche: ");
			 scanf(" %[^\n] ",titreRecherche);
			   int trouve = 0;
			    for(int i=0 ; i<nblivre ;i++){
			  	  if(strcmp(titre[i],titreRecherche) ==0){
			  	  	printf("livre trouve : %s | auteur: %s | prix : %.2f | quantite: %d \n ",titre[i],auteur[i],prix[i],quantite[i]);
			  	  	trouve = 1;
			  	  	 break;
					}
			  }
			  
			  if(!trouve){
			  	printf("livre non trouve. \n");
			  }
			  
		}
		else if(choix == 4 ){
			char titreRecherche[50];
		     printf("entre le nom de titre de livre pour metre a jour: ");
			 scanf(" %[^\n] ",titreRecherche);
			 int trouve = 0;
			    for(int i=0 ; i<nblivre ;i++){
			  	  if(strcmp(titre[i],titreRecherche) ==0){
			  	  	printf("entre la nouvelle quantite :");
			  	  	scanf("%d",&quantite[i]);
			  	  	printf("vous aves mise a jour avec succes.\n");
			  	  	trouve = 1;
			  	  	 break;
			  	  }
		}
		   if(!trouve){
			  	printf("livre non trouve. \n");
			  } 
		   
    } 
      else if(choix == 5){
      	char titreRecherche[50];
		     printf("entre le nom de titre de livre pour supprime : ");
			 scanf(" %[^\n] ",titreRecherche);
			 int trouve = 0;
			    for(int i=0 ; i<nblivre ;i++){
			  	   if(strcmp(titre[i],titreRecherche) ==0){
			  	   	 for(int j=i ; j<nblivre - 1 ; i++){
			  	   	 	strcpy(titre[j],titre[j+1]);
			  	   	 	strcpy(auteur[j],auteur[j+1]);
			  	   	 	prix[j]=prix[j+1];
			  	   	 	quantite[j]=quantite[j+1];
						  }
						  nblivre--;
						  printf("livre supprime avec succes. \n");
						  trouve=1;
						  break;
			  	   	
					 }	
			  	  }
			  	  if(!trouve){
			  	printf("livre non trouve. \n");
			  } 
	  } 
	   else if(choix == 6){
	   	 int total=0;
	   	  for(int i=0;i<nblivre;i++){
	   	  	total += quantite[i];
			 }
		 printf("total de livre en stock est : %d\n",total);
	   }
        else if(choix==0){
        	printf("au revoir.\n");
		}
		else{
			printf("invalid choix. \n");
		}
   }while(choix != 0);
    return 0;
}
