#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,s,i;
    printf("donner le nombre des element du tableaux : ");
    scanf("%d",&n);
    int tab[n];
    for(i=0;i<n;i++){
    	printf("element de tab %d:",i+1);
    	scanf("%d",&tab[i]);
    	s += tab[i];
	}
	printf("la somme de votre element est %d\n",s);
    return 0;
}