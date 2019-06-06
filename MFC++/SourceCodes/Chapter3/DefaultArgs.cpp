/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - 매개변수에 기본 값이 필요하다면 기본 인자를 선언해보자.
 */

#include <iostream>
#include <string>

using namespace std;

// int f(int x, int y = 10, int z); // !?
int f(int x, int y, int z = 10); // OK
// int f(int x, int y, int z = 20); // ?

int f(int x, int y, int z) { return 10; }

int g(int x, int y, int z = 10); // OK
// int g(int x = 10, int y, int z); // !?
int g(int x = 10, int y = 20, int z); // OK

int g(int x, int y, int z) { return x + y + z; }

int main()
{
	g(); // OK
	return 0;
}

class Foo
{
	int bar(int x = a, int y = b, int z = c) { }

	static int a, b, c;
};