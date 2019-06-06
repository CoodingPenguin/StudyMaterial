/* Written by @nErumin (Github)
 * 2016-11-28
 *
 * Topic - 컨테이너의 공통적인 연산의 종류에 대해 알아보자.
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
	vector<int>::iterator iter;
	vector<int>::const_iterator citer;
	vector<int>::reverse_iterator riter; // invalid while using forward_list
	vector<int>::const_reverse_iterator rciter; // invalid while using forward_list
	vector<int>::size_type sz;
	vector<int>::difference_type iterDist; // similar to ptrdiff_t
	vector<int>::value_type val;
	vector<int>::reference valRef = val; // same as value_type&
	vector<int>::const_reference constValRef = val; // same as const value_type&
	
	vector<int> v;
	vector<int> v2;

	v.swap(v2); // Swap elements
	swap(v, v2); // same as above
	// faster than copying elements (but not as using array)

	v.size(); // invalid while using forward_list
	v.max_size();
	v.empty();

	// differ from what type of container is used
	// v.insert(...);
	// v.emplace(...);
	// v.erase(...);

	v.clear();

	v == v2;
	v != v2;

	// invalid while using unordered associative containers
	v < v2;
	v <= v2;
	v > v2;
	v >= v2;

	v.begin(); v.end(); v.cbegin(); v.cend();
	v.rbegin(); v.rend(); v.crbegin(); v.crend(); // invalid while using forward_list

	auto iter = v.begin(); // ???
	auto citer = v2.begin(); // ???

	auto actualConstIter = v.cbegin(); // OK

	return 0;
}

class Foo
{
public:
	Foo() = delete;
	Foo(int i) { }
};

void Construct()
{
	Foo f{ 3 };
	vector<Foo> fooV{ 10, f }; // OK
	// vector<Foo> fooV2{ 10 }; // Error!


	vector<int> v; // empty container (but not as used with array)
	vector<int> vv;
	vector<int> v2{ v }; // copy construct using v
	vector<int> vvv = vv; // Two containers must have same type and value_type.
						  // When the container is a array, then two containers must have the same size as well.

	vector<int> v3{ v.cbegin(), v.cend() }; // copying elements between [begin, end).
											// invalid while using array

	vector<string> v4{ "a", "b", "c" }; // using initializer_list
										// can be used with	compatible types.
										// when used with array container, think as initializing a legacy array when using braces.
										// ex) int arr[5] = { 1, 2, 3 }; -> [1, 2, 3, 0(value-init), 0(value-init)]
	vector<string> v5 = { "a", "b", "c" }; // same as above

	// Only in sequential containers
	vector<int> v6(10); // invalid while using array, string
	vector<int> v7(10, 42); // invalid while using array
}