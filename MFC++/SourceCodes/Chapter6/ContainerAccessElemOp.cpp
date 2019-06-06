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
	vector<int> intVec{ 1, 2, 3, 4, 5 };
	list<int> intList;
	string str;
	forward_list<int> intForwardList;

	if (!intVec.empty())
	{
		auto& frontVal = intVec.front();
		auto& endVal = intVec.back(); // Not available in forward_list.
		auto endVal_2 = intVec.back(); // Reference?
	}

	// Only for array, deque, string, vector.
	intVec[0] = 0; // Can make a undefined behavior.
	intVec.at(0) = 0; // Can make a exception.



	return 0;
}