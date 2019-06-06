/* Written by @nErumin (Github)
 * 2016-10-24
 *
 * Topic - this의 정체를 파악하자.
 */

#include <iostream>
#include <string>

using namespace std;

class Foo
{
private:
	void DoSomething();
	inline void DoAnotherThing(string line, int number);

	int number;
	string line;
};

inline void Foo::DoSomething()
{
	number = 10; // How can we access to this variable?
	line = "Do";
}
// Just scope?

// Then?
inline void Foo::DoAnotherThing(string line, int number)
{
	number = 10;
	line = "Do";
}

int main()
{
	return 0;
}