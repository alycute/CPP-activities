// +
// ++
// +-+
// +--+
// +---+
// +----+

#include <stdio.h>

int main () {
	int range;

	printf("number here: ");
	scanf("%d", &range);

	for (int i = 0; i<=range; i++) {
		for (int j = 0; j<=i; j++) {
			if (j == 0 || j == i || i == range) {
				printf("+");
			} else {
				printf("-");
			}
		}
		printf("\n");
	}

	return 0;
}
