/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 스트림 반복자에 대해서 알아보자.
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

template <typename T>
void printVector(vector<T> vec)
{
	ostream_iterator<T> writeStreamIter{ cout, " " };

	for (auto iter : vec)
	{
		writeStreamIter = *iter;
	}

	cout << endl;
}

int main()
{
	vector<int> intVec{ 1, 2, 3, 4, 5, 6 };
	printVector(intVec);

	copy(intVec.cbegin(), intVec.cend(), ostream_iterator<int>(cout, ", "));

	return 0;
}