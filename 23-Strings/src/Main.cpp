#include <iostream>
#include <string>

/// <summary>
/// String are something that doesn't really exists in C++, but as we as humans need words to
///	better understand things, we'll need to save data that are words o phrases. For this C++
/// has the characters arrays that are the basic form of the strings a chain of character.
/// For this it is possible to use a character pointer (const char*) or a character array
/// (char <var>[]) to allocate the data of the string.
/// But for more advance uses and a cleaner way to use string C++ has a library <string>
/// that has the functionality to allocate the data of the string and brings multiple
/// methods to transform and use the strings. For more information in the methods see
/// the documentation: https://cplusplus.com/reference/string/string/
/// </summary>

int main() {
	// To use the basics of Strings in C++, it is normally used the char pointer, where you
	// will allocated the memory with length on the string, so it becomes a immutable variable
	// and its length cannot be changed.
	const char* name = "Calum";
	std::cout << name << std::endl;

	// To be able to modify the inside data you will need to change to a char array.
	char name2[] = "Hello";
	name2[2] = 'a';
	std::cout << name2 << std::endl;

	// You can also give the data as a list, but it is necessary to en el string with a \0 or 0,
	// this is because the compiler only know that a string has finished when it gets to a 0 that
	// is after the char pointer.
	char name3[5] = { 'H', 'e', 'l', 'l', 'o' };
	std::cout << name3 << std::endl;

	char name4[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	std::cout << name4 << std::endl;

	// The best way to use string in C++ is by using the string library.
	std::string name5 = "Calum";
	std::cout << name5 << std::endl;

	// To add strings you can use the next code.
	std::string name6 = std::string("Calum") + "Rak";
	std::cout << name6 << std::endl;

	// To search some sub string in the string you can use the next code.
	std::string name7 = std::string("Calum") + "Rak";
	bool contains = name7.find("Ra") != std::string::npos;
	std::cout << "Name:" << name7 << " contains Ra:" << contains << std::endl;

	std::cin.get();
}
