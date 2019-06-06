/* Source by C++ Primer 5th Edition.
 *
 * Topic - friend 선언과 일반적인 선언은 차이가 있음을 알아두자.
 */

struct A
{
public:
	friend int f() // implicitly inlined
	{
		return 42;
	}

	A() { f(); } // ?

	int g();
	int h();
};

int A::g()
{
	return f(); // ?
}

int f();

int A::h()
{
	return f(); // OK
}

int main()
{
	return 0;
}