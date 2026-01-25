#include <iostream>

/// <summary>
/// Basic overview of the primitive DataTypes that C++ has.
/// </summary>

int main() {
	// char, short, int, long, long long, double, float, bool

	bool var_bool = true;
	std::cout << var_bool << std::endl;
	std::cout << sizeof(var_bool) << std::endl;

	float var_float = 5.5f; // Has to have an F to define a float
	std::cout << var_float << std::endl;
	std::cout << sizeof(var_float) << std::endl;

	double var_double = 5.5; // Has to have an F to define a float
	std::cout << var_double << std::endl;
	std::cout << sizeof(var_double) << std::endl;

	char var_char = 'A';//char var_char = 65;
	std::cout << var_char << std::endl;
	std::cout << sizeof(var_char) << std::endl;

	short var_short = 65;
	std::cout << var_short << std::endl;
	std::cout << sizeof(var_short) << std::endl;

	int var_int = 8; // -2b -> 2b
	std::cout << var_int << std::endl;
	std::cout << sizeof(var_int) << std::endl;

	var_int = 20;
	std::cout << var_int << std::endl;
	std::cout << sizeof(var_int) << std::endl;

	unsigned int var_unsigned_int = 400000000000;
	std::cout << var_unsigned_int << std::endl;
	std::cout << sizeof(var_unsigned_int) << std::endl;

	std::cin.get();
}
