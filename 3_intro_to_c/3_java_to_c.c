#include <stdio.h>

void func(int x) {
	printf("Func was passed %d\n", x);
}

int main() {
	// variable assignment
	int x = 5;
	int y;
	y = 5;

	// Calling functions
	func(x);

	// if statements
	if (x < 10) {
		;
	} else if (y < 3) {
		;
	} else {
		;
	}

	// for loops
	for (int i = 0; i < 10; i++) {
	}

	// while loops
	while (1) {
	}
}
