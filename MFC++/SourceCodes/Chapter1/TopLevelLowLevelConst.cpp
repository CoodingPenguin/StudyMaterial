/* Source by C++ Primer 5th Edition
 *
 * Topic - 상위 const와 하위 const를 구분하자.
 */

int main()
{
	int i = 42;
	int* const p1 = &i; // Top? Low?

	const int ci = 42; // Top? Low?
	const int* p2 = &ci; // Top? Low?

	const int* const p3 = p2; // Top? Low?
	const int& r = ci; // Top? Low?

	i = ci;
	p2 = p3;

	// int* p = p3; // Hmm...
	p2 = p3;
	p2 = &i;

	// int& r2 = ci; // Hmm...
	const int& r3 = i;

	return 0;
}