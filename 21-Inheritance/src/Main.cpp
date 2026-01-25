#include <iostream>

/// <summary>
/// Inheritance is a pillar of the OOP. With this you can extend the functionality
/// of a class to another without the need have the same code copied in every single
/// class. This also makes the child class also being the type of the parent class.
/// In this case the class Player is also an Entity type, so if another function
/// needs an Entity variable in a parameter a Player object can be passed because
/// is also an Entity.
/// </summary>

class Entity {
public:
	float X, Y;

	void Move(float xa, float ya) {
		X += xa;
		Y += ya;
	}
};

class Player : public Entity {
public:
	const char* Name;

	void PrintName() {
		std::cout << Name << std::endl;
	}
};

int main() {
	std::cout << "Size of Entity: " << sizeof(Entity) << std::endl;
	std::cout << "Size of Player: " << sizeof(Player) << std::endl;

	Player player;
	player.Name = "Player 1";
	player.PrintName();
	player.X = 3;
	player.Y = 5;
	player.Move(-2, 3);

	std::cin.get();
}
