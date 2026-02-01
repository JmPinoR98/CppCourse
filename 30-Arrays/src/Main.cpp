#include <iostream>
#include <array>

/// <summary>
/// An array is a set of variables of the same type that are saved in memory next to each other and
/// the array object saves the pointer direction. To access to one the variable is with the
/// syntax <array>[<position>], where the position is the size of the array - 1. As the array object
/// is a pointer, you can also use pointer logic to access the memory stored in the object.
/// </summary>

int main() {
	int example[5];
	example[0] = 5;

	std::cout << example[0] << std::endl;
	std::cout << example << std::endl;

	int example2[5];

	for (int i = 0; i < 5; i++) {
		example2[i] = i;
		std::cout << example2[i] << std::endl;
	}

	int example3[5];
	int* ptr = example3;

	*(ptr + 2) = 6;
	std::cout << *(ptr + 2) << std::endl;

	int* example4 = new int[5]; // Array created in the Heap Memory.

	for (int i = 0; i < 5; i++) {
		example4[i] = 2 * i;
		std::cout << example4[i] << std::endl;
	}
	delete[] example4;

	// Length (only for stack allocated array).

	int example5[5];
	int length = sizeof(example5) / sizeof(int);
	std::cout << "Size of the Array: " << length << std::endl;

	// Better way for the length
	static constexpr int exampleLength = 5;
	int example6[exampleLength];
	std::cout << "Size of the Array: " << exampleLength << std::endl;

	// With libraries (Standard Array)
	std::array<int, 5> example7;
	for (int i = 0; i < example7.size(); i++) {
		example7[i] = 6 * i;
		std::cout << example7[i] << std::endl;
	}

	std::cin.get();
}
