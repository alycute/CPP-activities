#include <stdio.h>

int main() {
    int x;
	printf("box number: ");
	scanf("%d", &x);

	// algo
	for (int i = 1; i<=x; i++) {
		for (int j = 1; j<=x; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

