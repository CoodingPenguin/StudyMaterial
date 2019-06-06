/* Source by Exceptional C++ Style, Item 32.
 *
 * Topic - 코드를 분석해보자.
 */

#include <assert.h>

struct X
{
	static bool f(int* p)
	{
		return p && 0[p];
	}
};

int main()
{
	int x = 1;

	for (int i = 0; i < 100; i++);
	//// What is the result?????????/
		++x;

	assert(X::f(&x));

	return 0;
}