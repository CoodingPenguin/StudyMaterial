/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - inline 지정은 만능이 아님을 알아두자.
 */

#include <iostream>
#include <string>

using namespace std;

inline int foo(int x, int y)
{
	return x + y;
} // With debugger?

using FuncPtr = int(*) (int, int);
FuncPtr ptr = &foo; // Ouch! will not inlined!

template <typename T>
inline void DoSomething(T t1, T t2)
{
	foo(2, 2); // assume that it will be inlined
	ptr(2, 2); // inlined?

	// .....
	// Size bigger and bigger
}

int main()
{
	return 0;
}

inline void g(); // If g() is changed...

inline void g()
{
	foo(2, 2);
} // Clients of g() should be able to see foo()

void h(); // No matter!

void h()
{
	foo(2, 2);
}

class Foo
{
public:
	Foo() { } // Hmm.. inlined?
private:
	string s1, s2, s3;
};