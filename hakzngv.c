#include <stdio.h>
int main() {
	const int size=4;
	char z[size];
	printf("Enter anything: ");
	for(int i = 0; i < size; ++i){
		scanf("%c", &z[i]);
	}
	for(int i = size - 1; i >= 0; --i){
		printf("%c",z[i]);
	}
}
