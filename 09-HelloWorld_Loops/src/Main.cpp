#include <iostream>
#include "./Headers/Log.h"

/// <summary>
/// Here we can see how does the different types of Loops works in C++.
/// For Loop where you can define, compare and transform a variable to
/// repeat some code. While loop that only need a boolean to function.
/// And the Do...While that is the same as the while just that it will
/// always execute at least 1 time.
/// </summary>

int limit() {
	return 5;
}

int main() {
	for (int i = 0; i < limit(); i++) {
		if (i % 2 == 0) {
			continue;
		}
		Log("Hello World! For");
		std::cout << i << std::endl;
	}

	int	j = 0;
	while (j < limit()) {
		if (j > 2) {
			break;
		}
		Log("Hello World! While");
		j++;
	}

	int k = 0;
	do {
		Log("Hello World! Do...While");
		k++;
	} while (k < limit() - 1);

	std::cin.get();
}
