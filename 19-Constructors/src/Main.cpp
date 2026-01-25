#include <iostream>
/// <summary>
/// Constructors are a method to initialize the data of the class, it can be created as
/// many times as needed but with different parameters (Polymorphism).
/// Constructors don't run if the object is not instanced, for example for static methods.
/// To prevent the access to the constructor (Create instances of the class) it can be done
/// by putting the constructor in private zone.
/// Also you can also Delete the constructor like Constructor() = delete;
/// </summary>
class Entity {
public:
	int X, Y;

	Entity() {
		X = 0.0f;
		Y = 0.0f;
	}

	Entity(int x, int y) {
		X = x;
		Y = y;
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
	std::cin.get();

	Log::Write();
	//Log l; //Cannot be accessed because the constructor is private or was deleted;
}
