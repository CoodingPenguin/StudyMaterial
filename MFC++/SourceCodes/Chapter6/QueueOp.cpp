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
	queue<int> q;
	priority_queue<int> priorQ;

	q.push(10);
	q.emplace(42);

	q.pop();

	// Not available for priority_queue
	q.front();
	q.back();

	// Not available for queue
	priorQ.top();

	return 0;
}