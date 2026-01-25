#include <iostream>

#define LOG(X) std::cout << x << std::endl;

/// <summary>
/// Here It can be seen the difference between a Class and a Struct.
/// A class always creates it's attributes and methods as private
/// whereas the Struct always creates the attributes and methods
/// as public.
///
/// It exists for backwards compatibility with C.
///
/// One way to use the Struct DataType is to use it when you only
/// need to use and modify variables and more complex like
/// inheritance.
/// </summary>

class Player {
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) {
		x = xa * speed;
		y = ya * speed;
	}
};

struct Person {
	int x, y;
	int speed;

	void Move(int xa, int ya) {
		x = xa * speed;
		y = ya * speed;
	}
};

int main() {
	// If you try to use variables to define something complex, there is going to be a time when
	// the complexity of the logic will not be optimal. For this we can create Classes.
	int PlayerX, PlayerY;
	int PlayerSpeed = 2;

	int PlayerX0, PlayerY0;
	int PlayerSpeed0 = 2;

	// Using classes the same idea is simplified a lot. As the class Player now is a DataType you
	// can use this to your advantage to create as many instance of the class as you need that has the
	// same attributes and methods.
	Player player;
	player.speed = 1;
	player.Move(1, 2);

	//The only difference between a Struct and a Class is that a Struct by default has the attributes
	// and the method as public. It exists for backwards compatibility with C.
	// One way to use the Struct DataType is to use it when you only need to use and modify variables and
	// more complex like inheritance.
	Person person;
	person.speed = 1;
	person.Move(1, 2);

	std::cin.get();
}
