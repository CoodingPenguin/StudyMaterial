/* Source by Effective Modern C++, Item 31.
 *
 * Topic - 람다 내에서 암묵적으로 갈무리하는 것을 피하자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <deque>

using namespace std;

int main()
{
	
	return 0;
}

class Foo
{
private:
	vector<function<bool(int)>> filters;
	int classDivisor;
	static int staticDivisor;
public:
	void AddDivisorFilter()
	{
		auto divisor = 100;
		filters.emplace_back(
			[&](int number) { return number % divisor == 100; }
		); // Safe?
	}

	void AddAnotherDivisorFilter()
	{
		auto divisor = 100;
		filters.emplace_back(
			[=](int number) { return number % divisor == 100; }
		); // Safe?
	}

	auto MakeDivisorFilter()
	{
		return [=](int value) { return value % classDivisor == 0; }; // Safe?
	}

	auto MakeAnotherDivisorFilter()
	{
		return [=](int value) { return value % staticDivisor == 0; }; // Safe?
	}
};