#include <iostream>
#include <string>

using string = std::string;

/// <summary>
/// Is the permissions that other objects have over the attributes and methods in the class. In C++
/// there are 3 types of visibility:
///		* Private: Only the class can access the attributes and methods
///		* Protected: Only the class that inherits can access the attributes and methods
///		* Public: Every other entity can access the attributes and methods.
///	This is used to communicate to other programmers which attributes and methods in a class can be
/// accessed by other class or with the object.
/// </summary>

class Entity {
public:
	int W;
protected:
	int Z;
private:
	int X, Y;
public:
	Entity() {
		X = 0;
		Y = 0;
		Z = 0;
		W = 0;
	}
};

class Player : public Entity {
public:
	Player() {
		//X = 2;  This cannot be accessed because the X attribute is private.
		Z = 2; // This can be accessed because the Z attribute is protected, so it can be accessed in the class that inherits the attribute.
		W = 3; // This can be accessed because the w attribute is public, it can be access everywhere.
	}
};

int main() {
	Entity e;
	// e.X = 2; This cannot be accessed because the X attribute is private.
	// e.Z = 3; This cannot be accessed because the Z attribute is protected.
	e.W = 3; // This can be accessed because the w attribute is public, it can be access everywhere.

	std::cin.get();
}
