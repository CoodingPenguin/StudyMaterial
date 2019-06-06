/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 멤버 변수의 초기화 값이 선택되는 순서를 알아두자.
 */

#include <iostream>
#include <string>

using namespace std;

class Foo
{
public:
	Foo() : number(0) { }
	Foo(bool b) { }
	Foo(char c) { number = 2; }

	Foo(int n) : number{ 0 } { number = 2; }
public:
	int number{ 1 };
};

int main()
{
	Foo f;
	Foo f2(true);
	Foo f3('t');
	Foo f4(100);
	
	cout << f.number << endl; // ?
	cout << f2.number << endl; // ?
	cout << f3.number << endl; // ?
	cout << f4.number << endl; // ?
	return 0;
}