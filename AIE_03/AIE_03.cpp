

#include <iostream>
#include <string>

const int* BinarySearch(const int* arr, int count, int searchVal);
void TestResult(const int* result, int* const expected);


int main(int argc, char** argv)
{
	const int NUM_ITEMS = 8;
	int arr1[NUM_ITEMS] = { 1, 3, 5, 7, 9, 11, 13, 15 };

	// The numbers in the array are assumed to be sorted
	// search for the values 9, 1, 15, 0

	TestResult( BinarySearch(arr1, NUM_ITEMS, 9),  &arr1[4]   );
	TestResult( BinarySearch(arr1, NUM_ITEMS, 1),  &arr1[0]   );
	TestResult( BinarySearch(arr1, NUM_ITEMS, 15), &arr1[7]   );
	TestResult( BinarySearch(arr1, NUM_ITEMS, 0),  nullptr    );
	TestResult( BinarySearch(arr1, NUM_ITEMS, 16), nullptr    );


	return 0;
}

void TestResult(const int* result, int* const expected)
{
	if (result == expected)
	{
		std::cout << "PASS: result(" <<
			(result == nullptr ? "nullptr" : std::to_string(*result).c_str()) << ")" << std::endl;
		return;
	}

	std::cout << "FAIL: received(" <<
		(result == nullptr ? "nullptr" : std::to_string(*result).c_str()) << ") expected(" <<
		(expected == nullptr ? "nullptr" : std::to_string(*expected).c_str()) << ")" << std::endl;
}

const int* BinarySearch(const int* arr, int count, int searchVal)
{
	// TODO: Implement a binary search
	// the array is assumed to be sorted


	// initalize and declare l and r
	int l = 0;
	int r = count - 1;

	// while l is less or equal to r
	while (l <= r)
	{
		// m is l + r /2 
		int m = ((l + r) / 2);
		// if  m is equal to searchValue return the index as &arr[m]
		if (arr[m] == searchVal)
		{
			// return the pointer 
			return &arr[m];
		}
		// the value in the array is less than the searchValue 
		if (arr[m] < searchVal)
		{// Go to the next number in the array
			l = m + 1;
		}
		// if the value of the array is greater than searchValue 
		if (arr[m] > searchVal)
		{
			// set r to m -1
			r = m - 1;
		}
		

	}
	// This method should:
	//	- Return: nullptr if the value is not found
	//  - Return: pointer to the found value in the array

	return nullptr;
}