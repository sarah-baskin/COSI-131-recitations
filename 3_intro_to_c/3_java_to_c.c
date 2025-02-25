#include <stdio.h>

void func(int x) {
	printf("Func was passed %d\n", x);
}

int main() {
	// variable assignment
	int x = 5;
	int y;
	y = 5;

	// math
	y = y+10/2;
	x++;
	y += x;

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

	// conditionals
	1 && 0 == 0;
	1 || 0 == 1;
	!1 	   == 0;

	// for loops
	for (int i = 0; i < 10; i++) {
		;
	}

	// while loops
	while (1) {
		;
	}

	// === Differences ===
	// Arrays and Strings <-- Covered today
	// No objects
	// Manual memory management
	// Header files / forward declaration
	// Other small things
}
