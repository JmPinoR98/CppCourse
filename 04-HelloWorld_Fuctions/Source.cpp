#include <iostream>

/// <summary>
/// Basic overview of how does functions works in C++. There are 2 basic functions:
/// *   The ones that need to return a value. This functions always has a prefix of
///		the DataType that needs to be returned.
///	*	And the ones that does needs to return anything, the void functions.
/// This functions also can have parameters that are values that are given to change
/// the behavior or the result of the function.
/// </summary>

int Multiply(int a, int b) {
	return a * b;
}

void MultiplyAndLog(int a, int b) {
	std::cout << a * b << std::endl;
}

int main() {
	int result = Multiply(3, 2);

	std::cout << result << std::endl;

	MultiplyAndLog(3, 2);
	MultiplyAndLog(8, 5);
	MultiplyAndLog(90, 45);

	std::cin.get();
}
