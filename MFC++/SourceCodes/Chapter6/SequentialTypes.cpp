/* Written by @nErumin (Github)
 * 2016-11-23
 *
 * Topic - 사용 가능한 순차 컨테이너의 종류를 알아보자.
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
	vector<int> v;
	deque<int> d;
	list<int> l;
	string s;

	forward_list<int> fl;
	array<int, 10> a;
	
	return 0;
}