/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - C++ 스타일의 캐스팅을 사용하자.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 5, j = 4;
	double d = static_cast<double>(j) / i;

	void* ptr = &d;
	double* doubleTypePtr = static_cast<double*>(ptr);

	// static_cast<int*>(doubleTypePtr); // !?
	const double* constPtr = &d;
	// static_cast<double*>(constPtr); // !?

	return 0;
}

void ConstCast()
{
	double d = 3.14;

	const double* constPtr = &d;
	double* constAwayPtr = const_cast<double*>(constPtr); // OK
	*constAwayPtr = 3.14; // OK

	const double* reConstPtr = const_cast<const double*>(constAwayPtr); // OK

	const string s2("Hello!");
	string& constAwayStringRef = const_cast<string&>(s2); // OK
	constAwayStringRef = "Hello, Universe!"; // !?
}

void reinterpretCast()
{
	int i = 10;
	int* pi = &i;
	
	string* ps = reinterpret_cast<string*>(pi); // OK
}

class Base
{
	virtual void f() { } // for polymorphic class
};

class Derived : public Base
{

};

void DynamicCast()
{
	Base* b = new Derived;
	
	Derived* d = dynamic_cast<Derived*>(b);
	Base* b2 = dynamic_cast<Base*>(d);
	Base* b3 = d;

	Base& refB = *b;
	Derived& refD = dynamic_cast<Derived&>(refB);
	Base& refB2 = dynamic_cast<Base&>(refD);
	Base& refB3 = refD;
}