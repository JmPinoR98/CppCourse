#include <iostream>
#include "Log.h"

/// <summary>
/// Here we can see the basic function of how does the If...else statement
/// works in C++. This statement allows to, by a condition, execute something
/// if the condition is true o execute another code if the condition is false.
/// </summary>

int main() {
	int x = 6;

	if (x == 5) {
		Log("Hello World!");
	}

	if (1) {
		Log("Hello World! To 1");
	}

	if (0) {
		Log("Can't say Hello World! :(");
	}

	if (x) {
		Log("Hello World! To X");
	}

	const char* ptr = "Hello";

	if (ptr) {
		Log(ptr);
	}

	const char* ptr2 = nullptr;

	if (ptr2) {
		Log(ptr2);
	}
	else if (ptr2 == "Hello")
	{
		Log("Ptr is Hello!");
	}
	else {
		Log("Pointer is Null!");
	}

	std::cin.get();
}
