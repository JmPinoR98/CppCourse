#include <iostream>
#include "Log.h"

/// <summary>
/// Basic Layout to see how does the Linker works by searching all of the objects in the projects and
/// linking them together for the binary file to be executable.
/// </summary>

void InitLog() {
	Log("Initialized Log");
}

void Log(const char* message) {
	std::cout << message << std::endl;
}
