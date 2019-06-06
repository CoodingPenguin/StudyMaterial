/* Written by @nErumin (Github)
 * 2016-11-28
 *
 * Topic - 순차 컨테이너에 대한 요소 삽입/접근/삭제에 대해 알아보자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <array>

using namespace std;

int main()
{
	array<int, 42> intArr;
	vector<int> intVec;
	list<int> intList;
	string str;

	intVec.push_back(10); // Not available for array, forward_list container.
	intVec.emplace_back(42);
	str.push_back('O'); // Same as str += '0'

	intList.push_front(42); // Only available for list, deque, forward_list.
	intList.emplace_front(10);

	// Not available for array container.
	// The forward_list container specializes functions which appear below.
	intVec.insert(intVec.begin(), 10); // Insert a element in front of the vector.
	intVec.emplace(intVec.end(), 42);
	intVec.insert(intVec.begin(), 10, 100);

	intList.insert(intList.begin(), intVec.begin(), intVec.end());
	intList.insert(intList.begin(), intList.begin(), intList.end()); // No!!!
	intList.insert(intList.begin(), { 0, 1, 2, 3, 4, 5, 6 });

	return 0;
}