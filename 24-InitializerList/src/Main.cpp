#include <iostream>
#include <string>

/// <summary>
///	The Initializer list is another way to initialize the attributes of a class,
/// but in a way more optimal that the normal constructor way. This is because
/// when you initialize a variable in the normal way you always create the variable
/// when the variable is created, then you replace the information with the creation
/// of a new object that is inside the constructor.
/// So, using the Initializer list way you prevent the system to create 2 objects and
/// destroying one and only create 1 with the data given in the constructor.
/// </summary>

class Example {
public:
	Example() {
		std::cout << "Created Entity!" << std::endl;
	}

	Example(int x) {
		std::cout << "Created Entity with " << x << "!" << std::endl;
	}
};

class Entity {
private:
	std::string m_Name;
	Example m_Example;
public:
	Entity() {
		m_Name = "Unknown";
		m_Example = Example(8);
	}

	Entity(const std::string& name) {
		m_Name = name;
	}

	const std::string& GetName() const { return m_Name; }
};

class Entity2 {
private:
	std::string m_Name;
	int m_Score;
	Example m_Example;
public:
	Entity2()
		: m_Name("Unknown"), m_Score(0), m_Example(8) {
	}

	Entity2(const std::string& name, int score, int cant_example)
		: m_Name(name), m_Score(score), m_Example(cant_example) {
	}

	const std::string& GetName() const { return m_Name; }
};

int main() {
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	Entity e1("Calum");
	std::cout << e1.GetName() << std::endl;

	Entity2 e2;
	std::cout << e0.GetName() << std::endl;

	Entity2 e3("Calum", 15, 8);
	std::cout << e1.GetName() << std::endl;

	std::cin.get();
}
