/* Written by @nErumin (Github)
 * 2016-11-29
 *
 * Topic - 컨테이너 어댑터의 공통적인 연산의 종류에 대해 알아보자.
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
	stack<int>::size_type sz;
	stack<int>::value_type val;
	stack<int>::container_type container;

	deque<int> intDeque;

	stack<int> stk; // Must support push_back, pop_back, back.
	stack<int> anotherStk;
	queue<int> q(intDeque); // Must support push_front, back, push_back, front, push_front.
	priority_queue<int> priorQueue; // Must support queue conditions + random-access.

	// Compare container contents
	stk == anotherStk;
	stk != anotherStk;
	stk > anotherStk;
	stk >= anotherStk;
	stk < anotherStk;
	stk <= anotherStk;

	stk.empty();
	stk.size();
	stk.swap(anotherStk);
	swap(stk, anotherStk);

	stack<int, vector<int>> vecStack;
	
	return 0;
}