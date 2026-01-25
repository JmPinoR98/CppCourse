#include <iostream>

/// <summary>
/// A static variable in a class are variables that can be accessed by the class
/// but all of the instances of the class will have the same value, so if it is
/// changed at some point all of the instances will have the new value.
/// </summary>

struct Entity {
	//This is useful when you need to share the same information across all the instances of the class.
	static int x, y; // When you declare a variable in a class as static, all the instances of the class will have the same value.

	static void Print() { // This has a problem and that is that a static function can't access the information of a non static variable.
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int main() {
	Entity e;
	/*e.x = 4;
	e.y = 5;*/

	Entity::x = 4;
	Entity::y = 5;

	// Entity e1 = { 6,7 }; //At the moment when you declare your variables static, this form of initialize the class no longer works
	Entity e1;
	//e.x = 6; // When the value changes, it will also change in the Entity e, created previously.
	//e.y = 7; // Doesn't make sense to call it this way because the variables are now part of the class, not of the instance.
	Entity::x = 6;
	Entity::y = 7;

	e.Print();
	e1.Print();
	Entity::Print();

	std::cin.get();
}
