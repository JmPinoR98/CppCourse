#include <iostream>
#include <string>

using string = std::string;

/// <summary>
/// An interface defines a contract for behavior that implementing classes must follow,
/// without providing any implementation details itself.
/// </summary>

class Entity {
public:
	virtual string GetName() = 0; // Pure Virtual function (Interface).
};

class Player : public Entity {
private:
	string m_Name;
public:
	Player(const string& name) : m_Name(name) {}

	string GetName() override { return m_Name; } // Overwritten function.
};

class Printable {
public:
	virtual string GetClassName() = 0; // Pure Virtual function (Interface).
};

class Entity2 : public Printable {
public:
	virtual string GetName() { return "Entity"; } // Virtual Functions
	string GetClassName() override { return "Entity"; } // Overwritten Interface
};

class Player2 : public Entity2 {
private:
	string m_Name;
public:
	Player2(const string& name) : m_Name(name) {}

	string GetName() override { return m_Name; } // Overwritten function.
	string GetClassName() override { return "Player"; } // Overwritten Interface
};

void PrintName(Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

void Print(Printable* obj) {
	std::cout << obj->GetClassName() << std::endl;
}

int main() {
	//The class cannot be implemented if one of the functions is an Interface.
	/*Entity* e = new Entity();
	PrintName(e);*/
	Entity* e = new Player("Rak");
	PrintName(e);

	Player* p = new Player("Calum");
	PrintName(p);

	Entity2* e2 = new Entity2();
	Print(e2);

	Player2* p2 = new Player2("Calum");
	Print(p2);

	std::cin.get();
}
