/* Written by @nErumin (Github)
 * 2017-01-03
 *
 * Topic - 갈무리 목록의 사용 형식들에 대해 알아보자.
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

int main()
{
	int number = 0;

	auto func = [number] { return number; };
	auto valueFunc = [number]() mutable { number++; };
	auto refFunc = [&number] { return number; };
	number++;

	cout << func() << endl;
	cout << refFunc() << endl;

	vector<int> intVec{ 1, -1, 2, -2 };

	transform(intVec.begin(), intVec.end(), intVec.begin(), [](int num)
	{
		return num < 0 ? -num : num;
	});

	return 0;
}

auto makeFunc() -> function<void()>
{
	return [] {};
}


void ImplicitCaptureByValue()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e = 50;

	auto func = [a, b, c, d, e] { return a + b + c + d + e; };
	auto implicitlyByValueFunc = [=] { return a + b + c + d + e; };
	auto implicitlyByRefFunc = [&] { return a + b + c + d + e; };

	auto mixedFunc = [=, &c, &d] { return a + b + c + d + e; };
	auto anotherMixedFunc = [&, a, b] { return a + b + c + d + e; };
}