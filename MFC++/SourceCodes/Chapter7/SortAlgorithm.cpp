/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 요소 정렬 알고리즘에 대해 알아보자.
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

int main()
{
	vector<int> intVec{ 4, 2, 3, 1, 0, 1, 2 };

	sort(intVec.begin(), intVec.end());
	auto uniqueEndPoint = unique(intVec.begin(), intVec.end());
	intVec.erase(uniqueEndPoint, intVec.cend());

	return 0;
}