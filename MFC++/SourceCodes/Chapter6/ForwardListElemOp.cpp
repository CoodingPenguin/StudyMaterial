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
	forward_list<int> fl;
	vector<int> v{ 1, 2, 3, 4, 5 };

	fl.before_begin();
	auto iter = fl.cbefore_begin();
	iter = fl.insert_after(iter, 42);
	iter = fl.insert_after(iter, 10, 42);
	iter = fl.insert_after(iter, v.begin(), v.end());
	iter = fl.insert_after(iter, { 1, 2, 3, 4, 5, 6 });
	iter = fl.emplace_after(iter, 42);

	fl.erase_after(fl.before_begin());
	fl.erase_after(fl.before_begin(), fl.end());
	fl.clear();

	return 0;
}