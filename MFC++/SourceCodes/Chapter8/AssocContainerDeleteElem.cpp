/* Written by @nErumin (Github)
* 2017-01-16
*
* Topic - 연관 컨테이너에 요소를 추가/삭제해보자.
*/

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

int main()
{
	vector<int> intVec{ 1, 2, 3, 4 };
	set<int> intSet = { 1, 2, 3, 4, 5 };
	map<int, int> intMap = { { 1, 1 },{ 2, 2 },{ 3, 3 } };

	auto result = intSet.erase(3); // result = 1
	auto result_2 = intSet.erase(10); // result = 0

	intSet.erase(intSet.begin()); // returns a next element.
	intSet.erase(intSet.begin(), intSet.end()); // returns the end iterator in the range.

	return 0;
}