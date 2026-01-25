#include <iostream>
#include <string>
using String = std::string;

/// <summary>
/// There are two ways to instantiate objects in C++ and everything depends on where you want/have
/// to allocate the data of the object, the Heap or Stack Memory.
/// As a standard way and the best way because of performance and manageability it is recommended
/// to always instantiate objects in the Stack by just creating objects the normal way:
///		Entity entity;
///		Entity entity2("Calum");
///		Entity entity3 = Entity("Calum");
/// But if the size of data is too big or you want to manage the life cycle of that object you will
/// need to create that object in the Heap Memory:
///		Entity* entity4 = new Entity("Calum");
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
	// This way of initialized an object will always call for the default constructor.
	Entity entity;
	std::cout << entity.GetName() << std::endl;

	// To call for an specific constructor you just need to pass the parameters that are
	// required. This way is the most standard and if you can create an object in this
	// form always create it. Because is the fastest and manageable way to instantiate Objects.
	Entity entity2("Calum");
	std::cout << entity2.GetName() << std::endl;

	Entity entity3 = Entity("Calum");
	std::cout << entity3.GetName() << std::endl;

	// The one time that you will need another form to instantiate an object is when you need
	// that object to live outside of the scope that created it.

	// This will not have the information because the entity4 was created in the Stack and
	// it will be deleted the moment that the scope finishes. So for it to continue it is
	// necessary to create it in the Heap Memory.
	Entity* e;
	{
		Entity entity4("Calum");
		e = &entity4;
		std::cout << entity4.GetName() << std::endl;
	}

	// To solve this you need to change how the entity was created, changing the entity type
	// to a pointer and using the keyword `new` that creates the Object in the Heap Memory.
	Entity* e1;
	{
		Entity* entity4 = new Entity("Calum");
		e1 = entity4;
		std::cout << entity4->GetName() << std::endl;
	}

	delete e1;
	std::cin.get();
}
