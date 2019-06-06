/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - 배열 매개변수를 선언하는 다양한 방법을 파악하자.
 */

#include <iostream>
#include <string>

using namespace std;

void a(const int* arr); // OK
void b(const int arr[]); // ?
void c(const int arr[3]); // ?
void d(const int(*arr)[3]); // ?
void e(const int(&arr)[3]); // ?

int main()
{
	int i = 0;
	int intArr[] = { 0, 2, 4, 6, 8 };
	int anotherArr[] = { 0, 2, 4 };

	a(intArr);
	a(&i);
	b(intArr);
	b(&i);
	c(intArr);
	c(&i);

	// d(&intArr); // ?
	d(&anotherArr); // ?

	// e(&i); // ?
	// e(intArr); // ?
	e(anotherArr); // ?
	return 0;
}

void x(int arr[][3]); // ?
void y(int(*arr)[3]); // ?
