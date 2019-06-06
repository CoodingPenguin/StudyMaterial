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

int main()
{
	istream_iterator<int> intReadStreamIter{ cin };
	istream_iterator<int> intEOFIter;
	vector<int> intVec;

	while (intReadStreamIter != intEOFIter)
	{
		intVec.push_back(*(intReadStreamIter++));
		cout << "Read : " << intVec.back() << endl;
	}

	return 0;
}

void Fold()
{
	istream_iterator<int> anotherStreamIter{ cin }, anotherEOFIter;
	int sum = accumulate(anotherStreamIter, anotherEOFIter, 0);
	cout << "Sum : " << sum << endl;
}