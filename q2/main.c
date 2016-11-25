# Rita Alsattah 10154610
# Zina Al-Sabbagh 10161380

#include <stdio.h>
#include "mystring.h"
#include <stdlib.h>
#include <string.h>

int main(void){
 
	int from = 3, n = 10;
	
	char *a = "String 1" ;
	char *b = "String 2" ;
	char *source = "Random string" ; 
	char *catString;
	char target[strlen(source)];
	
	substring(source, from, n, target);
	
	catString = safestrcat(a,b);
	
	printf("%s\n",target, catString);
	
 
}
