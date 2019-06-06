/* Source by Exceptional C++, Item 44.
 *
 * Topic - 캐스팅 퀴즈
 */

#include <iostream>

using namespace std;

class Base
{
public:
	virtual ~Base() { }
};

class Derived : private virtual Base
{

};

class Derived_2 : public Base
{

};

class DoubleDerived : public Derived, public Derived_2
{

};

int main()
{
	Base base;
	Derived derived;
	Derived_2 derived_2;
	DoubleDerived doubleDerived;

	const Base constBase;
	const Base& refBase = base;
	const Base& refBase_2 = constBase;

	char character;

	// #1
	// unsigned char* puc = static_cast<unsigned char*>(&character);

	// #2
	// signed char* psc = static_cast<signed char*>(&character);

	// #3
	// void* pv = static_cast<void *>(&derived);
	
	// #4
	// Derived* pd1 = static_cast<Derived*>(pv);

	// #5
	// Derived* pd2 = static_cast<Derived*>(&derived);

	// #6, #7 - refBase, refBase_2 (const Base&)
	// Base* pb1 = const_cast<Base*>(&refBase);
	// Base* pb2 = const_cast<Base*>(&refBase_2);

	// #8
	// Derived* pd3 = dynamic_cast<Derived*>(&derived_2);
	
	// #9
	// Base* pb3 = dynamic_cast<Base*>(&derived);

	// #10
	// Derived* pd4 = static_cast<Derived*>(&doubleDerived);

	// #11
	// DoubleDerived* pdd = static_cast<DoubleDerived*>(pd4);

	// #12
	// Base* pb4 = dynamic_cast<Base*>(pd2);
	
	// #13
	// Base* pb5 = dynamic_cast<Base*>(pd4);
	
	// #14
	// Derived_2* pc1 = dynamic_cast<Derived_2*>(pd4);
	
	// #15
	// Derived_2& rc1 = dynamic_cast<Derived_2&>(*pd2);

	return 0;
}




// #1 - Error
// #2 - Error
// #3 - Fine
// #4 - Fine
// #5 - Fine
// #6 - Fine
// #7 - Legal, but logic error
// #8 - Legel, but logic error
// #9 - Error
// #10 - Fine
// #11 - Fine
// #12 - Error
// #13 - Fine?
// #14 - Fine?
// #15 - Error