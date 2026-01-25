#include <iostream>

/// <summary>
/// Basics of the use of static variables. This variables are objects that can only
/// be seen by the Linker in the translation unit that were created.
/// </summary>

int s_Variable = 10; // This variable doesn't have problems because the s_Variable in the Static.cpp is static and the Linker cannot find it.
extern int e_Variable; // External Linking. To search in another translation unit for the variable.

void Function() {
}

int main() {
	std::cout << e_Variable << std::endl;
	std::cin.get();
}
