#include <iostream>
#include "Log.h"

/// <summary>
/// Basic Layout to see how does the Debugger Tool of Visual Studio works.
/// </summary>

int main() {
	int a = 8;
	a++;

	const char* string = "Hello";

	for (int i = 0; i < 5; i++) {
		const char C = string[i];
		std::cout << C << std::endl;
	}

	Log("Hello World!");
	std::cin.get();
}
