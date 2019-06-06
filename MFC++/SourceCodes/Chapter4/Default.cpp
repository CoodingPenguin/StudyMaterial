/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 명시적으로 합성 멤버를 원한다면 default를 명시하자.
 */

#include <iostream>
#include <string>

using namespace std;

class Foo
{
private:
	Foo(const Foo&);
};

Foo::Foo(const Foo&) = default; // Default keyword in outside of the class

class Bar
{
private:
	Bar() = default; // Explicit synthesized default constructor
};

int main()
{
	return 0;
}

// Make code easier to read
// Uniformity
// Affect a property of the class
