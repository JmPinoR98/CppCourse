#include <iostream>
#include <string>
using String = std::string;

/// <summary>
/// The new keyword operator attempts to allocate requested number of bytes of an Object in
/// the Heap Memory. It both allocates raw memory and calls the object's constructor (if it
/// is a class type) to initialize it, returning a pointer to the newly created object or
/// array.
/// </summary>

class Entity {
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
};

int main() {
	int a = 2;
	int* b = new int[50]; // 200 bytes

	// With this you allocate the 50 Entities in the Heap Memory one after another like in the stack.
	Entity* e = new Entity[50];

	Entity* e2 = new Entity();

	delete[] b;
	delete[] e;
	delete e2;
	std::cin.get();
}
