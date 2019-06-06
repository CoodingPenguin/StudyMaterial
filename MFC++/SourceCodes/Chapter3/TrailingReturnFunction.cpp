/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - 후행 반환 타입을 통해 함수를 정의해보자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <type_traits>

using namespace std;

auto f() -> char;
auto g() -> string;
auto h() -> vector<int>;

template <typename T1, typename T2>
/* ??? */ x(T1 t1, T2 t2)
{
	return t1 + t2;
}

template <typename T1, typename T2>
auto x(T1 t1, T2 t2) -> decltype(t1 + t2)
{
	return t1 + t2;
}

int(*bar())(char*, string&, char&)
{
	return nullptr;
}

auto foo() -> int(*)(char*, string&, char&)
{
	return nullptr;
}

int main()
{
	return 0;
}