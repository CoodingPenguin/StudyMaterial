/* Written by @nErumin (Github)
 * 2016-11-28
 *
 * Topic - 순차 컨테이너에 대한 assign과 swap 연산에 대해 알아보자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <array>

using namespace std;

int main()
{
	array<int, 10> arr = { 0 };
	array<int, 10> arr2 = arr;

	arr = arr2;
	arr = { 0 }; // invalid when using with array

	vector<string> strV;
	vector<const char *> oldStrV;
	// strV = oldStrV; // Error
	
	// 'assign' in array containers is a invalid operation.
	auto iter = strV.begin();
	strV.assign(oldStrV.begin(), oldStrV.end()); // OK
												 // Do not use the 'iter' variable anymore!
	strV.assign({ "A", "B", "C" });
	strV.assign(10, "Hello, World!");

	strV.assign(strV.begin(), strV.begin() + (strV.size() / 2)); // No!!!
	return 0;
}

void Swap()
{
	vector<string> strV(10);
	vector<string> anotherStrV(42);

	strV.swap(anotherStrV); // O(1)
	swap(strV, anotherStrV); // O(1)

	// iterators, references, pointers doesn't be invalid after swapping elements. (because it didn't move any stored-elements in memory)
	// (except for string containers. It makes those things invalid.)


	array<string, 42> arr;
	array<string, 42> anotherArr;

	swap(arr, anotherArr); // Not O(1). Not make invalid for iterators, references, pointers.
}

void Resize()
{
	vector<string> v(20);

	v.resize(10); // Delete 10 elements.
	v.resize(20, "Hello, World!");
	v.resize(40);
}

void Capacity()
{
	vector<int> v(20, 42);

	v.capacity();

	v.reserve(10); // Ignored
	v.reserve(30); // A capacity will be updated at least 30.

	v.shrink_to_fit();
}