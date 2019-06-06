/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 함수 바인딩에 쓰이는 Placeholder에 대해 알아보자.
 */

#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <functional>
#include <deque>
#include <string>
#include <iostream>
#include <forward_list>

using namespace std;
using namespace std::placeholders;

template <typename T>
T Subtract(T operand1, T operand2)
{
	auto subFunc = minus<T>();
	return subFunc(operand1, operand2);
}

template <typename Iter, typename Value>
bool isAllEqualTo(Iter begin, Iter end, Value val)
{
	auto equalFunc = [](Value val1, Value val2) { return equal_to<Value>()(val1, val2); };
	auto bindedFunc = bind(equalFunc, _1, val);
	for_each(begin, end, bindedFunc);
}

int main()
{
	int result = Subtract(10, 3);
	int sameResult = bind(Subtract<int>, 10, 3)();

	auto reversedSubtract = bind(Subtract<int>, _2, _1);
	int anotherResult = reversedSubtract(10, 3);

	return 0;
}