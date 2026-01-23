#include <iostream>
#include "./Headers/Log.h"

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
