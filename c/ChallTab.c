#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int tab[MAX];
    int n;
    printf("donner le nombre des element du tableaux : ");
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++){
        printf("tab[%d] = ",i);
        scanf("%d",&tab[i]);
    }
    printf("Votre tableaux :\n");
    for(i=0;i<n;i++){
        printf("tab[%d] = %d \n",i,tab[i]);
    }
    return 0;
}