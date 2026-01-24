#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void IncrementPointer(int* value) {
	(*value)++;
}

void IncrementRef(int& value) { //When creating the parameter as a reference the program
	value++;				//doesn't create a new variable, it uses the parameter given to it
}

int main() {
	int a = 5;
	int* b = &a; //Pointer of memory of a.
	int& ref = a; //Reference of a.
	ref = 2;

	LOG(a);

	int c = 5;
	IncrementRef(c);
	LOG(c);

	int d = 5;
	IncrementPointer(&d);
	LOG(d);

	int e = 6;
	int f = 8;
	int& eref = e;
	//int& fref;  Can't create a reference without value.
	eref = f; // Doesn't change the reference, just put the value of f in e.

	//To change the reference is better to use Pointers
	int g = 5;
	int h = 7;

	int* gref = &g;
	*gref = 2;
	gref = &h;
	*gref = 1;

	LOG(g);
	LOG(h);

	std::cin.get();
}
