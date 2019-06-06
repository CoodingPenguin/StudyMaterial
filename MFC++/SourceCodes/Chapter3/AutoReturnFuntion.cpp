/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - 반환 타입 유추가 필요할 땐 auto를 사용하자.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <typename T1, typename T2>
auto x(T1 t1, T2 t2) -> decltype(t1 + t2)
{
	return t1 + t2;
}

template <typename T1, typename T2>
auto y(T1 t1, T2 t2)
{
	return t1 + t2;
}

auto fact(unsigned int i)
{
	if (i <= 1)
	{
		return 1U; // No just integer value.
	}

	return fact(i - 1) * i; // Be careful for ordering.
}

auto g()
{
	return static_cast<vector<int>>(1, 10);
}

int main()
{
	return 0;
}

auto h(string& s)
{
	return s;
}

decltype(auto) z(string& s)
{
	return s;
}

decltype(auto) foo()
{
	int x;
	return (x); // !?!?
}

void PartTwo()
{
	string s;
	h(s); // Ouch. I just want to reference of string!
	z(s) = "Hello, World!"; // Nice!

	const int& b = foo();
	int c = b; // Boom!
}