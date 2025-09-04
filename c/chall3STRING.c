#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char str1[20] = "testhhs";
    char str2[] = "thuger";

   strcat(str1, str2);

    printf("%s", str1);
    return 0;
}

