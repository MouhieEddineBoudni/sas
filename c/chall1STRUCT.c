#include<stdio.h>

int main(){
	int n;
	  printf("donner le nombre de element :");
	  scanf("%d",&n);
	int min;
	int index=0;
	int i;
	int tab[i];
	printf("remplir les element de tab:\n");
	 for(i=0;i<n;i++){
	 	scanf("%d",&tab[i]);
	 } if(tab[i]<min){
	 	min=tab[i];
	 	index=i;
	 }
	 printf("le min est %d est lindex %d",min,index);
	 return 0;
} 
 




















