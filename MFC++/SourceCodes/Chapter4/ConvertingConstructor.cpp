/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 생성자 선언 시에는 변환 생성자에 항상 주의해야 한다.
 */

#include <iostream>
#include <string>

using namespace std;

class Foo
{
public:
	Foo(double d) { }
	Foo(string s) { }
};


void DoSomething(int num) { }
void DoSomething(Foo f) { }
void DoAnotherThing(Foo f) { }

int main()
{
	Foo f{ 2.0 }; // OK.

	f = 3.14; // ?
	DoSomething(3.14); // ?

	DoAnotherThing('c'); // ?
	// DoAnotherThing("String"); // ?
	
	return 0;
}


struct Bar
{
	explicit Bar(double d);
	Bar(string s, double d = 3.14) { } // Converting?
};

/* explicit (No explicit in definition!) */ Bar::Bar(double d) { }

void DoSomething_2(Bar b) { }

void PartTwo()
{
	// DoSomething_2(3.14); // ?
	DoSomething_2(static_cast<Bar>(3.14)); // OK
	DoSomething_2(Bar(3.14)); // OK
	DoSomething_2(Bar{ 3.14 }); // OK
}