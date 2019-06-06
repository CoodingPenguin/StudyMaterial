/* Source by C++ Primer 5th Edition.
 * 
 * 2016-09-18
 * Topic - sizeof 연산자를 돌아보자.
 */

#include <iostream>
#include <string>

using namespace std;

class Foo
{
public:
	int bar, baz;
};

int main()
{
	Foo f;
	Foo* pf = &f;
	Foo* nullFooPointer = nullptr;

	sizeof Foo;
	sizeof f; // Same with above

	sizeof pf; // Pointer size
	sizeof *nullFooPointer; // ?

	sizeof f.bar;
	sizeof Foo::bar;

	constexpr int intArr[] = { 0, 2, 4, 6, 8 };
	sizeof intArr; // ?

	sizeof *intArr; // ?

	constexpr size_t arrSize = sizeof intArr / sizeof *intArr;
	

	return 0;
}