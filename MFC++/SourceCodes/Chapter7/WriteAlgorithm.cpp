/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 요소 기록 알고리즘에 대해 알아보자.
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
	int arr[] = { 1, 2, 3, 4, 5 };
	int* pos = find(begin(arr), end(arr), 4);
	int* anotherPos = find(arr, arr + 5, 5);

	vector<int> intVec{ 1, 2, 3, 4, 5 };
	vector<int> anotherIntVec(5, 100);
	vector<string> strVec;

	fill(intVec.begin(), intVec.end(), 100);
	fill_n(intVec.begin(), intVec.size(), 100);

	copy(intVec.cbegin(), intVec.cend(), anotherIntVec.begin());
	
	replace(intVec.begin(), intVec.end(), 5, 5000);
	replace_copy(intVec.cbegin(), intVec.cend(), anotherIntVec.begin(), 3, 3000);

	return 0;
}