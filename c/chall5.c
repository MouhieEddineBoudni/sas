#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float C;
 printf("donner la temp en C");
 scanf("%f",&C);
 if(C < 0)
 printf("la temp est solid\n");
 else if(0 <= C < 100)
  printf("la temp est liquid\n");
  else
   printf("la temp est gaz\n");
	return 0;
}