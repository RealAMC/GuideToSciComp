// Ex 1.2
// Write code that asks a user to enter two integers from the keyboard and then write the product of those integers to the screen.

#include <iostream>

int main (int argc, char* argv[])
{
	int a,b;
	std::cout << "Enter a integer\n";
	std::cin >> a;
	
	std::cout << "Enter another integer\n";
	std::cin >> b;
	
	std::cout
		<< "The product of "
		<< a
		<< " and "
		<< b
		<< " is "
		<< a * b
		<< ".";
	
	return 0;
}