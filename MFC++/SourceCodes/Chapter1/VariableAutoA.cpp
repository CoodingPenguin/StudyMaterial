/* Source by C++ Primer 5th Edition.
 *
 * Topic - auto의 동작 원리를 파악하자.
 */
#include <initializer_list>

int main()
{
	// auto variable; // !?
	auto v = { 27 };
	auto v2{ 27 }; // C++11 result != C++14 result
	
	auto i = 0;
	auto* p = &i;

	// auto size = 0, pi = 3.14; // Hmm...
	auto& r = i;
	auto a = r; // Type?

	const int ci = i;
	const int& cr = ci;

	auto b = ci; // Type?
	auto c = cr; // Type?
	auto d = &i; // Type?
	auto e = &ci; // Type?

	const auto f = ci; // const + auto(int)
	auto& g = ci;
	// auto& h = 42; // Hmm...
	const auto& j = 42;

	return 0;
}