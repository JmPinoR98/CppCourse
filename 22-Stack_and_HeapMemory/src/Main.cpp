#include <iostream>
#include <string>

/// <summary>
/// The Stack memory works by allocating the data in memory like a stack, where the new value is allocated
/// after the value that was already in memory. For example, if I want to add an integer value (4 bytes) the
/// stack pointer will move 4 bytes, add the value and return the memory address. This is why is very fast,
/// because all the CPU has to do is to move the pointer by the size of the data that wants to save and
/// save the data.
/// Another thing to be aware  of the stack, it's that when the scope where the memory was created in finishes
/// the memory deletes all the values and gets back to where it started that scope. For example if a variable
/// is created inside a for loop after the loop finishes the variable that was created will be deleted.
///
/// The Heap Memory on the other hand allocates the memory by asking the operator system where is an space in the
/// Heap memory that has the space that is needed to save the data that is being created. This makes the use of
/// Heap memory allocation very heave and expensive to use. In a small case it'll now be seen, but in a large
/// scale it'll consume too much resources. The
/// Another thing to know about heap memory is the if the space that is needed it's not enough the heap memory
/// will need to ask to the operator system for more memory, which is another expensive thing to do. And finally
/// Always be aware that by using Heap Memory it is necessary to delete the data, it will not be deleted automatically.
///
/// In summary it is better to use the stack memory where it is possible and only use the heap memory when it
/// is completely necessary like when you need the data lifetime to be outside of the scope of a function or any other
/// scope or you need more data than the maximum size of data of the stack (2Mb)
/// </summary>

struct Vector3 {
	float x, y, z;

	Vector3() {
		x = 10;
		y = 11;
		z = 12;
	}
};

int main() {
	// Allocate an integer in the Stack Memory.
	int value = 5; //0x000000D8FF2FF6E4
	int array[5];
	std::cout << sizeof(array) << std::endl;
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	Vector3 vector;

	// Allocate an integer in the Heap Memory. The new keyword is the one that
	// allocates the value in the Heap Memory.
	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hvector = new Vector3();

	// If the data was allocated with the `new` statement it is necessary to delete it
	// manually, to prevent memory leaks.

	delete hvalue;
	delete[] harray;
	delete hvector;

	std::cin.get();
}
