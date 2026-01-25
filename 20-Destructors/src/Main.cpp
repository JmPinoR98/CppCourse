#include <iostream>
/// <summary>
/// Destructor is an special type of method that is gonna be called when the
/// object is gonna be destroyed, for example when an object is created inside
/// a function and the function ends, in that moment the destructor is gonna
/// be called and the entity will be deleted.
/// This is useful when you have some memory allocated and want to delete to
/// prevent memory leaks.
/// </summary>
class Entity {
public:
	int X, Y;

	Entity() {
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity" << std::endl;
	}

	Entity(int x, int y) {
		std::cout << "Created Entity" << std::endl;
		X = x;
		Y = y;
	}

	// The Destructor function it is always called when the object enters a Stack and gets out of scope.
	// This means the when a object is created for example inside a function and that function finished
	// the destructor is gonna be called and the entity will be deleted.
	~Entity() {
		std::cout << "Destroyed Entity" << std::endl;
	}

	//Valid way to initialize variables, but it's not a clean way to do it.
	/*void Init() {
		X = 0.0f;
		Y = 0.0f;
	}*/

	void Print() {
		std::cout << X << ", " << Y << std::endl;
	}
};

class Log {
	//Log() = delete; // By equaling the constructor do `delete` it will not be possible to create instances of the class with the default constructor.
private: // By putting the Constructor method in private it cannot be instanced.
	Log() {}
public:
	static void Write() {
		//Do something
	}
};

void Function() {
	Entity e2(10, 2);
	e2.Print();
	e2.~Entity(); // This is the form to manually call the destructor.
}

int main() {
	/*Entity e;
	std::cout << e.X << std::endl; This line gives an error because the e.X and e.Y has not been initialized or given a value.*/

	//It is possible to create a function that gives a value to the variables, but is a hassle to add all this work to give the data a value.
	Entity e;
	//e.Init();
	std::cout << e.X << std::endl;
	e.Print();

	Entity e1(10, 5);
	//e.Init();
	std::cout << e1.X << std::endl;
	e1.Print();

	Log::Write();
	//Log l; //Cannot be accessed because the constructor is private or was deleted;

	Function();
	std::cin.get();
}
