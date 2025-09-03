#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 int revenu,score,pret;
 printf("donner votre revenu annuel en euros : ");
 scanf("%d",&revenu);
  printf("donner votre score de credit sur 1000 : ");
 scanf("%d",&score);
  printf("donner votre duree de pret en annees : ");
 scanf("%d",&pret);
  if(revenu>= 30000 && score>=700 && pret<=10)
  printf("vous etes eligible");
  else if(revenu>= 30000 && score>=650 && pret<=15)
  printf("vous etes eligible avec condition");
  else
    printf("vous etes pas eligible");
  return 0;
}