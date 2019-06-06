/* Written by @nErumin (Github)
 * 2016-11-29
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
	list<int> intList{ intVec.cbegin(), intVec.cend() };
	string str;
	forward_list<int> intForwardList;

	if (!intVec.empty())
	{
		intVec.pop_back();
	}
	
	if (!intList.empty())
	{
		intList.pop_front();
	}

	auto nextIter = intVec.erase(intVec.end()); // !?
	intVec.erase(intVec.begin(), intVec.begin() + 2);
	intVec.clear();

	return 0;
}