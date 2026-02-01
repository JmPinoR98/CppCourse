#include <iostream>
#include <string>

using string = std::string;

/// <summary>
/// A virtual function is a member function that is declared within a base class using the keyword
/// virtual and is re-defined (Overridden) in the derived class. Virtual functions enable runtime
/// polymorphism, calling the correct function via a base class pointer or reference.
/// </summary>

class Entity {
public:
	virtual string GetName() { return "Entity"; } // Virtual function.
};

class Player : public Entity {
private:
	string m_Name;
public:
	Player(const string& name) : m_Name(name) {}

	string GetName() override { return m_Name; } // Overwritten function.
};

void PrintName(Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

int main() {
	Entity* e = new Entity();
	PrintName(e);

	Player* p = new Player("Calum");
	PrintName(p);

	std::cin.get();
}
