// Ex 1.6
/*
I want to record the number of cars that drive past my house each day for five consecutive days, and calculate the average of those numbers. Create an integer array to store these five numbers, and then write code to calculate the average of these numbers. Execute your code using the sample data 34, 58, 57, 32, 43. Verify that you get the correct answer of 44.8.
*/

#include <iostream>

int main (int argc, char* argv[])
{
	int aCars[5];
	double avgCars;
	
	aCars[0] = 34;
	aCars[1] = 58;
	aCars[2] = 57;
	aCars[3] = 32;
	aCars[4] = 43;
	
	// Calculate average
	avgCars = ((double)(aCars[0]+aCars[1]+aCars[2]+aCars[3]+aCars[4]))/5.0;
	
	// Print full name
	std::cout << "Average cars per day " << avgCars << ".\n";
	
	return 0;
}