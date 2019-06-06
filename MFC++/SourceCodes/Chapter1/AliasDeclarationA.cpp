/* Source by C++ Primer 5th Edition.
 *
 * Topic - 타입 별칭을 사용할 때는 별칭 선언을 사용하자.
 */

// Old style
typedef int Int;
typedef Int* IntPtr;

// New style
using Double = double;
using DoublePtr = double *;

int main()
{
	double d = 3.14;
	const DoublePtr pd = &d; // Top? Low?
	const DoublePtr* ppd = &pd;


	return 0;
}