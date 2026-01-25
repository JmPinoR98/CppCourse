#include <iostream>

/// <summary>
/// Enums is an structure that permits to representation of a variable
/// assigned to a DataType. This DataType can be modified or leave it by
/// default and all the subsequent variables will have the next value.
/// For example 1, 2, 3, 4...etc.
/// </summary>

enum Example : char {
	A = 5,
	B,
	C
};

int a = 0;
int b = 1;
int c = 2;

int main() {
	Example value = B;

	if (value == B) {
		//Do something
	}

	std::cin.get();
}
