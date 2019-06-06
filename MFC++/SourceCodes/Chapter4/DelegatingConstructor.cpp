/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 위임 생성자를 활용하자.
 */

#include <iostream>
#include <string>

using namespace std;

class Foo
{
public:
	Foo(int first, int second, int third) : a(first), b(second), c(third) { }
	Foo() : Foo(0, 0, 0) { }
	Foo(int first) : Foo(first, 0, 0) { cout << b << endl; /* When? */ }
private:
	int a, b, c;
};

int main()
{
	return 0;
}