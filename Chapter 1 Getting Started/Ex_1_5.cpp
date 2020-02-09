// Ex 1.5
/*
Write code that invites the user to input separately strings that store their given name and their family name. Print the user's full name to screen.
*/

#include <iostream>

int main (int argc, char* argv[])
{
	std::string Fname;
	std::string Lname;
	
	// Get Firstname
	std::cout << "Enter your first name and then hit RETURN\n";
	std::getline(std::cin, Fname);
	
	// Get Lastname
	std::cout << "Enter your last name and then hit RETURN\n";
	std::getline(std::cin, Lname);
	
	// Print full name
	std::cout << "Hello, " << Fname << " " << Lname;
	
	return 0;
}