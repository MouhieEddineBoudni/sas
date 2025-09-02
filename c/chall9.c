#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float y1,y2,x1,x2,z1,z2;
 printf("donner les prem point de cordonne x1 y1 z1");
 scanf("%f%f%f",&x1,&y1,&z1);
 printf("donner les deuxieme point de cordonne x2 y2 z2");
 scanf("%f%f%f",&x2,&y2,&z2); 
 distance = sqrt(pow(x1-x2 ,2) + pow(y1-y2 ,2) + pow(z1-z2 ,2));
 printf(" la disctance est %.2f",distance);
 
	return 0;
}