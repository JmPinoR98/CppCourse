#include <iostream>

#define LOG(X) std::cout << x << std::endl;

class Player {
public:
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
	player.x = 5;

	std::cin.get();
}
