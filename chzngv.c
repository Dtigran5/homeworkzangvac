#include <stdio.h>
int main() {
	char z[4];
	int i = 0;
	int count = 0;
	printf("Enter four number: ");
	scanf("%s", &z[i]);
	while(z[i] != '\0') {
		if(z[i]>47 && z[i]<58) {
			printf("%c", z[i]);
			count++;
		}
	++i;
	}	       
	if(count == 0) {
		printf("there is no tiv!");
	}	
}
