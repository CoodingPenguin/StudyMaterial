/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 함수 바인딩에 유용한 functional 함수들을 알아두자.
 */

#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <functional>
#include <deque>
#include <string>
#include <iostream>
#include <forward_list>

using namespace std;
using namespace std::placeholders;

template <typename NumberType>
bool isOdd(NumberType num)
{
	return (num % 2) != 0;
}

template <typename ValueType>
void print(ostream& os, ValueType val)
{
	os << val;
}

int main()
{
	vector<string> strVec{ "Hello", "Nice", "C++", "Foo" };
	vector<int> lengthVec(strVec.size());

	transform(strVec.cbegin(), strVec.cend(), lengthVec.begin(), mem_fn(&string::length));
	
	vector<int> intVec{ 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<bool> resultVec(intVec.size());

	transform(intVec.cbegin(), intVec.cend(), resultVec.begin(), not1(isOdd<int>));

	for_each(intVec.cbegin(), intVec.cend(), bind(print<int>, ref(cout), _1));
	return 0;
}