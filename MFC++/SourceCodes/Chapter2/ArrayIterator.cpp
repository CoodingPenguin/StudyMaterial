/* Written by @nErumin (Github)
 * 2016-09-06
 *
 * Topic - 포인터를 배열에 대한 반복자로 생각하자.
 */

#include <iostream>

using namespace std;

int main()
{
	int intArr[10] = { 0, 1, 2 };
	int* iter = intArr;

	*iter = 1; // Oh, iterator!
	
	iter++;
	*iter = 2; // Oh, iterator!

	int* endIter = &intArr[10]; // End

	// Same with iterator.
	for (int* i = intArr; i != endIter; i++)
	{
		*i = *i * 2;
	}

	return 0;
}

void PartTwo()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	
	int* startIter = begin(arr);
	int* endIter = end(arr);

	// Reason for why array is allowed in range-based for loop.
	auto arrLength = endIter - startIter; // Actually, not int!
}

void PartThree()
{
	int arr[] = { 0, 2, 4, 6, 8 };

	int i = *(arr + 2); // Value?

	int* p = &arr[2];
	int j = p[1]; // Value?

	int k = p[-1]; // Ouch. Value?
}