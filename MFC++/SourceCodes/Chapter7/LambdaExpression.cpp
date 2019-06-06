/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 람다 표현식의 형식을 살펴보자.
 */

#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <iostream>
#include <forward_list>

using namespace std;

template <typename Iter, typename Value>
Iter findFirstBiggerElement(Iter begin, Iter end, Value val)
{
	return find_if(begin, end, [val](Value elem)
	{
		return elem > val;
	});
}

template <typename Iter>
void printElements(Iter begin, Iter end)
{
	for_each(begin, end, [](auto value)
	{
		cout << value << endl;
	});
}

int main()
{
	auto addFunc = [](int a, int b = 5) -> int { return a + b; };
	auto subFunc = [](int a, int b) { return a - b; };
	auto fooFunc = [] { cout << "Foo!" << endl; };
	
	addFunc(10, 20);
	subFunc(20, 30);
	fooFunc();

	vector<int> intVec{ 1, 2, 3, 4, 5 };
	auto iter = findFirstBiggerElement(intVec.cbegin(), intVec.cend(), 100);
	
	printElements(intVec.cbegin(), intVec.cend());
	return 0;
}