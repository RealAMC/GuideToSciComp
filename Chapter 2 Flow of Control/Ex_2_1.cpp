// Ex 2.1
/*
Below is a fragment of code that uses several features introduced in this chapter. The variables x, y and z are all double precision floating point variables.
1. Explain, in words what the fragment of code does.
	If x is GREATER than y OR x is LESS than 5, z is 4.0.
	Otherwisez = 2.0

2. What would the fragment of code assign to the variable z when the variables x and y take the following values:
	a) x = 10.0 and y = -1.0 z = 4
	b) x = 10.0 and y = 20.0 z = 2
	c) x = 0.0 and y = 20.0 z = 4
3. Modify the code above so that the condition x>y is replaced by x≥y
	a) x = 10.0 and y = -1.0 z = 4
	b) x = 10.0 and y = 20.0 z = 2
	c) x = 0.0 and y = 20.0 z = 4
*/

#include <iostream>

int main (int argc, char* argv[])
{
	double x, y, z;
	x = 10.0;
	y = -1.0;
	
	if ((x >= y) || (x < 5.0))
	{
		z = 4.0;
	}
	else
	{
		z = 2.0;
	}
	
	std::cout << "x: " << x << "\ty: " << y << "\tz: " << z << "\n";
	
	x = 10.0;
	y = 20.0;
	
	if ((x >= y) || (x < 5.0))
	{
		z = 4.0;
	}
	else
	{
		z = 2.0;
	}
	
	std::cout << "x: " << x << "\ty: " << y << "\tz: " << z << "\n";

	x = 0.0;
	y = 20.0;
	
	if ((x >= y) || (x < 5.0))
	{
		z = 4.0;
	}
	else
	{
		z = 2.0;
	}
	
	std::cout << "x: " << x << "\ty: " << y << "\tz: " << z << "\n";
	
	return 0;
}