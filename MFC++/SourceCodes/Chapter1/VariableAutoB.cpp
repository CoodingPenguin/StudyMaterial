/* Source by Effective Modern C++, Item 2.
 *
 * Topic - auto의 동작 원리를 파악하자.
 */
#include <initializer_list>

void Foo(int, double) { }

int main()
{
	auto x = 42;
	const auto cx = x;
	const auto& rx = x;
	
	auto&& rRef = x;
	auto&& rRef_2 = cx;
	auto&& rRef_3 = 42;

	const char str[] = "Hello, world!";
	auto autoStr = str; // Type?
	auto& autoStr_2 = str; // Type?
	
	auto func = Foo;
	auto& func_2 = Foo;

	// auto i = { 1, 2, 3.0 }; // Hmm...

	int intArr[10][10] = { 0, };

	// Problem : Iterate using range-based for loop?

	return 0;
}

template <typename T, int length>
constexpr int getArraySize(T (&arr)[length])
{
	return length;
}