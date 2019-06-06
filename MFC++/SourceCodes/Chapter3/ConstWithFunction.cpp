/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - const와 함수 매개변수의 관계에 조심하자.
 */

#include <iostream>
#include <string>

using namespace std;

void f(int i); // OK
void f(const int i); // ?

void f(int i) { } // OK
void f(const int i) { } // ?

void g(int* p); // OK
void g(const int* p); // ?

void g(int* p) { } // OK
void g(const int* p) { } // ?

int& x(int& i) { } // OK
int& x(const int& i) { } // ?

int main()
{
	x(3) = 10;
	x(1000) = 2000;

	return 0;
}