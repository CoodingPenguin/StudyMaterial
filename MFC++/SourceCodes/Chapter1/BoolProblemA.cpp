/* Source by Exceptional C++, Item 45.
 *
 * Topic - 내장 bool 타입은 꼭 필요한걸까?
 */
#include <assert.h>

// Option 1
using boool = int;
const boool truue = 1;
const boool falsse = 0;

void f(int); // OK
void f(boool); // OK

int main()
{
	return 0;
}

void f(boool b)
{
	assert(b != true && b != false); // !?
}

void f(int) { } // Ouch!