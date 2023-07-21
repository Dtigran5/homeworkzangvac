#include <stdio.h>
int main() {
	int z[4];
	int i = 0;
	printf("Enter four number: ");
	while(i < 4) {
		scanf("%d", &z[i]);
		++i;
	}
	printf("%d, %d, %d, %d", z[0], z[1], z[2], z[3]);
}
