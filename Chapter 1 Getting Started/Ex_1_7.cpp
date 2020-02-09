// Ex 1.7
/*
Investigate the use of the compiler error warning flags discussed in Sect 1.3.3.
For example: (i) declare an integer as a constant variable and the attempt to change this value later in the code; and (ii) attempt to set an integer variable to the value 3.2.
*/

#include <iostream>

int main (int argc, char* argv[])
{
	// Declare const int
	const int task1 = 100;
	
	// task1 = 120;
	
	std::cout << "Attempting to change a const: " << task1 << "\n";
	
	// Attempt to set an integer variable to 3.2
	
	int task2 = 50;
	
	task2 = 3.2;
	
	std::cout << "Attempting to set a double to a int: " << task2 << "\n";
	
	return 0;
}