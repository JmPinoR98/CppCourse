#include <iostream>
#include "Log.h"

/// <summary>
/// Here we can see the use of a Header File to facilitated the import and instances of
/// objects that are being used across all the files.
/// </summary>

int main() {
	InitLog();
	Log("Hello World");
	std::cin.get();
}
