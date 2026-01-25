#include <iostream>

#define LOG(x) std::cout << x << std::endl;

/// <summary>
/// Basics of how does a pointer works. With them it is possible to access to the memory
/// address of an object in the code and with the capability to modify the data that is
/// saved in that memory address.
/// To change the value of the pointer it is necessary to specify in the pointer the type
/// of data that is being saved.
/// It is also possible to save the address of memory of a pointer in another pointer.
/// </summary>

int main() {
	/*int var = 8;
	void* ptr = &var;
	*ptr = 10; Gives an error because the PC doesn't know what 10 is and as the pointer is null it can't be saved*/

	int var = 8;
	int* ptr = &var; // To change the value of the pointer it is necessary to specify in the pointer the type of data that is being saved.
	*ptr = 10;

	LOG(var);

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** ptr2 = &buffer; //Pointer of a pointer. It is possible to save the address of memory of a pointer in another pointer.

	delete[] buffer;
	std::cin.get();
}
