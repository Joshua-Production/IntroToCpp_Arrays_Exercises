
#include <iostream>

int main(int argc, char** argv)
{
	const int NUM_NUMBERS = 5;
	int numbers[NUM_NUMBERS] = { 10, 20, 30, 40, 50 };

	/* 
	TODO: Print each value of the array in order
	Expected:
		10, 20, 30, 40, 50,
	*/
	// Task1: Write your Code here
	// ------------------------------------------------------------------------

	// Loop through 
	for (int i = 0; i < NUM_NUMBERS; i++)
	{
		// Print the number at "i" in the "numbers" array
		std::cout << numbers[i] << std::endl;
	}
	std::cout << "" << std::endl;
	// ------------------------------------------------------------------------


	/*
	TODO: Print each value of the array in reverse order
	Expected:
		50, 40, 30, 20, 10,
	*/

	// Task 2: Write your Code here
	// ------------------------------------------------------------------------
	// Loop through "numbers" in reverse order
	for (int i = NUM_NUMBERS -1; i >= 0; i--)
	{
		// Print the number at "i" in the "numbers" array
		std::cout << numbers[i] << std::endl;
	}

	// ------------------------------------------------------------------------

	return 0;
}
