 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystring.h"

char* safestrcat(char *a, char*b) {

	int i = strlen(a), j = strlen(b);
	char *newStr = malloc(i+j);
	
	for (int k=0; k<i; k++){
	
		newStr[k] = a[i];
	
	}
	
	int strIndex;
	
	for (int p=0; p<j; p++){
	
		strIndex = p + i;
		newStr[strIndex] = b[p];
	
	}
	
	return newStr;
}

int substring(char *source, int from, int n, char *target){
	
	if ((strlen(source) == 0) || (from < 0) || (n < 1) || ((from + n) > strlen(source))){ 
		
		return -1;
	
	}
	
	for (int i = 0; i<n; i++){
	
		target[i] = source[from+i];
	
	}
	
	return 0; 
	
}