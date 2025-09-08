#include <stdio.h>
#include <stdlib.h>
 

 
int main()
{
    int tab[]= {3,5,-6,4,88,67};
    int n=6;
    int min = tab[0], index=0;
    for (int i=1 ; i< n ; i++){
    	if(tab[i]<min){
    	    min=tab[i];
    	    index=i;
		}
	}
	printf("la valeur min est %d de lindex %d",min,index);
    return 0;
}