// Ex 1.4
/*
Write code that declares four 2 x 2 matricies of double precision floating point numbers, A, B, C, D, and assignes values to the entries of A and B. Let C = A + B, and D=AB. Extend your code so that it calculates the entries of C and D, and then prints the entries of those matricies to the screen.
*/

#include <iostream>
#include <cmath>

int main (int argc, char* argv[])
{
	// Assign arrays
	double A[2][2];
	double B[2][2];
	double C[2][2];
	double D[2][2];
	
	// Pupulate matricies A and B
	A[0][0] = 12.2;
	A[0][1] = 4.5;
	A[1][0] = -7.2;
	A[1][1] = 0.22;
	B[0][0] = 5.56;
	B[0][1] = 0.223;
	B[1][0] = 0.45;
	B[1][1] = 303;
	
	// Calculate C = A + B
	C[0][0] = A[0][0] + B[0][0];
	C[0][1] = A[0][1] + B[0][1];
	C[1][0] = A[1][0] + B[1][0];
	C[1][1] = A[1][1] + B[1][1];
	
	// Calculate D = AB
	D[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
	D[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
	D[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
	D[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
	
	// Print A, B, C, D
	std::cout << "\nA:";
	std::cout << "\t" << A[0][0] << "\t" << A[0][1] << "\n";
	std::cout << "\t" << A[1][0] << "\t" << A[1][1] << "\n";
	
	std::cout << "\nB:";
	std::cout << "\t" << B[0][0] << "\t" << B[0][1] << "\n";
	std::cout << "\t" << B[1][0] << "\t" << B[1][1] << "\n";
	
	std::cout << "\nC:";
	std::cout << "\t" << C[0][0] << "\t" << C[0][1] << "\n";
	std::cout << "\t" << C[1][0] << "\t" << C[1][1] << "\n";
	
	std::cout << "\nD:";
	std::cout << "\t" << D[0][0] << "\t" << D[0][1] << "\n";
	std::cout << "\t" << D[1][0] << "\t" << D[1][1] << "\n";
	
	return 0;
}