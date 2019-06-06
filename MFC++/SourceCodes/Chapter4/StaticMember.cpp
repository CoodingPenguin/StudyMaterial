/* Written by @nErumin (Github)
 * 2016-10-26
 *
 * Topic - 정적 멤버의 선언과 정의, 사용 방법을 알아두자.
 */

#include <iostream>
#include <string>

using namespace std;

class Foo
{
public:
	static string s;
	static string anotherS;
	// static int n = 10; // ?
	static constexpr int constN = 10; // OK
	
	static void DoSomething(); // OK
	static void DoWrongThing() // ?
	{
		cout << "Oops" << endl;
	}

private:
	static int n;
	static int DoSpecialThing() { return 42; }
};

string Foo::anotherS{ "Hello, World" };

int Foo::n = DoSpecialThing(); // OK (Private - Private)
// constexpr int Foo::constN = 20; // ?
constexpr int Foo::constN; // OK. Definition.

void Foo::DoSomething() // OK
{
	cout << "Foo!!!" << endl;
}

int main()
{
	string ss = Foo::s; // ?
	string anotherSS = Foo::anotherS; // OK

	auto* constPN = &Foo::constN; // ?
	cout << *constPN << endl; // ?

	auto& constRefN = Foo::constN; // ?
	cout << constRefN << endl; // ?

	Foo::DoWrongThing();

	Foo f;
	f.anotherS = "Hello, Universe!"; // OK
	f.DoSomething(); // OK

	auto pf = &f;
	auto& rf = f;
	pf->DoWrongThing(); // OK
	rf.DoSomething(); // OK

	return 0;
}

class SomeType
{
public:
	SomeType(int value = st) // OK
	{

	}

	SomeType* p; // OK
	// SomeType st; // ?
	// SomeType& r; // OK
	static SomeType sst; // OK
	static int st;
};