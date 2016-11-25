// Rita Alsattah: 10154610
// Zina Al-Sabbagh: 10161380

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
	char poem[];
	int c;
	
	scanf("%s", poem);

	
	FILE *file;
	file = fopen(poem, "w+");

	char prevc='\n';

	if (file) {
		while ((c = getc(file)) != EOF) {
			if (c>= 'a' && c <= 'z' && (prevc=='\n')) {
                
				int upperc = toupper(c);
				
				fprintf(file, "%c",upperc);
				
				putchar(upperc);
			}
			else{	
				
				fprintf(file, "%c",c);
                
				putchar(c);
			}

		prevc=c;
		}
	}
}
