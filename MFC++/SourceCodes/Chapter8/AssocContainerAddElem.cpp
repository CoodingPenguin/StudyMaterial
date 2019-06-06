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
#include <functional>

using namespace std;

template <typename T>
bool compare(T t1, T t2)
{
	return less<T>()(t1, t2);
}

int main()
{
	vector<int> intVec{ 1, 2, 3, 4 };
	set<int> intSet = { 1, 2, 3, 4, 5 };
	map<int, int, decltype(compare<int>)*> intMap({ {1, 1}, {2, 2}, {3, 3}, {4, 4} }, compare<int>);

	auto result = intSet.insert(10); // second = true
	
	intSet.insert(intVec.cbegin(), intVec.cend()); // Ignore the existing key value in map, set.
	intSet.insert({ 1, 2, 3, 4, 5 }); // Ignore the existing key value in map, set.
	intSet.insert(intSet.cbegin(), 20);

	intMap.insert(make_pair(4, 4));
	intMap.insert({ 5, 5 });

	intSet.emplace(9);
	intSet.emplace(intSet.cbegin(), 20);

	return 0;
}