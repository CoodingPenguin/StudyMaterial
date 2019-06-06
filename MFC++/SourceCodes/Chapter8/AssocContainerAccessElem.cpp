/* Written by @nErumin (Github)
 * 2017-01-16
 *
 * Topic - 연관 컨테이너 요소에 접근해보자.
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
	set<int> intSet = { 1, 2, 4, 5 };
	map<int, int> intMap = { { 1, 1 },{ 2, 2 },{ 3, 3 } };

	intMap[4] = 4; // Only in map, unordered_map
	int mappedValue = intMap.at(4); // Only in map, unordered_map
	
	auto iter = intSet.find(1);
	intSet.find(10); // end()
	intSet.count(10); // 0
	intSet.count(1); // 1

	// Only in the ordered containers.
	intSet.lower_bound(2); // intSet.begin() + 1
	intSet.lower_bound(3); // intSet.begin() + 2
	intSet.upper_bound(4); // intSet.end() - 1
	intSet.upper_bound(5); // intSet.end()

	intSet.equal_range(3);
	return 0;
}