/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 요소 읽기 알고리즘에 대해 알아보자.
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

	vector<int> intVec;
	vector<int> anotherIntVec;
	vector<string> strVec;
	vector<const char*> anotherStrVec;
	
	int sum = accumulate(intVec.cbegin(), intVec.cend(), 0);
	string s = accumulate(strVec.cbegin(), strVec.cend(), static_cast<string>("")); // Must be casted.

	bool isEqual = equal(strVec.cbegin(), strVec.cend(), anotherStrVec.cbegin()); // Must be 'anotherIntVec.size() >= intVec.size()'

	return 0;
}