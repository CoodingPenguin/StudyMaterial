/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 리스트에 특화되어 있는 알고리즘 함수들을 살펴보자.
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
#include <iterator>

using namespace std;
using namespace std::placeholders;

int main()
{
	list<int> intList{ 1, 2, 3, 4 };
	forward_list<int> forwardIntList{ 1, 2, 3, 4, 5 };
	list<int> anotherList{ intList.cbegin(), intList.cend() };

	intList.sort();
	
	intList.unique();
	
	intList.reverse();

	intList.remove(3);
	intList.remove_if([](int n)
	{
		return n == 3;
	});

	intList.sort();
	anotherList.sort();

	intList.merge(anotherList);

	return 0;
}