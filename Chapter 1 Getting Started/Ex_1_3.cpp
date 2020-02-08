// Ex 1.3
/*
Write code that declares two vectors as arrays of double precision floating point numbers of 
length 3 and assigns values to each of the entries. Extend this code so that it calculates 
the scalar (dot) product of these vectors and prints it to screen.
Finally extend the code so that it prints the Euclidean norm of both vectors to screen.
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
	// Assign arrays
	double array1[3] = {2.4, 5.7, -10.4};
	double array2[3] = {2.3, 5.6, 23.5};
	
	// Calculate dot product.
	double dot;
	dot = array1[0]*array2[0] + array1[1]*array2[1] + array1[2]*array2[2];
	
	// Calculate Euclidean norm
	double Enorm1, Enorm2;
	Enorm1 = sqrt(array1[0]*array1[0] + array1[1]*array1[1] + array1[2]*array1[2]);
	Enorm2 = sqrt(array2[0]*array2[0] + array2[1]*array2[1] + array2[2]*array2[2]);
	
	// Print results to screen
	std::cout << "Dot product of both vectors: " << dot << ".\n";
	std::cout << "Euclidean norm of array1: " << Enorm1 << ".\n";
	std::cout << "Euclidean norm of array2: " << Enorm2 << ".\n";
	
	return 0;
}