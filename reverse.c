#include<stdio.h>
#include<string.h>


void reverse(char *p, char *q) {
	char temp;
	while(p < q || p == q) {	
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}

void main () {      
	char string[50], *p, *q;
	scanf("%s", string);
	p = &string[0];
	q = &string[strlen(string) - 1];
	reverse(p, q);
	printf("%s", string);
}


