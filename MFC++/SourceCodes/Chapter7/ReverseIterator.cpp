/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 역방향 반복자에 대해 알아보자.
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
	ostream_iterator<int> out(cout, ", ");

	vector<int> intVec{ 1, 2, 3, 4, 5, 6 };
	auto iter = find(intVec.crbegin(), intVec.crend(), 3);
	
	copy(intVec.crend(), iter, out); // ?
	copy(iter.base(), intVec.cend(), out);

	return 0;
}