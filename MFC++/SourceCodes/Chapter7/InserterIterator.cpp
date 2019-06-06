/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 삽입 반복자, inserter 반복자에 대해 알아보자.
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
	vector<int> intVec{ 1, 2, 3, 4, 5 };
	vector<int> anotherIntVec;
	deque<int> intDeque;

	copy(intVec.cbegin(), intVec.cend(), front_inserter(intDeque));
	copy(intVec.cbegin(), intVec.cend(), back_inserter(anotherIntVec));
	
	auto backInserter = inserter(intVec, intVec.end());
	backInserter = 100;
	backInserter = 200;

	cout << intVec.back() << endl;
	return 0;
}