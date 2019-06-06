/* Written by @nErumin (Github)
 * 2016-11-29
 *
 * Topic - 스택/큐 연산에 대해 알아보자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <array>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	stack<int> stk;

	stk.push(10);
	stk.emplace(10);
	
	auto topElem = stk.top();
	stk.pop();

	return 0;
}