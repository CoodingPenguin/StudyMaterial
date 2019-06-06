/* Source by C++ Primer 5th Edition.
 *
 * Topic - 클래스 간의 프렌드 관계를 파악하자.
 */

class D
{
public:
	void DoSomething(); // Do not define func.
};

class A
{
	friend class B; // OK
	friend void D::DoSomething(); // OK
private:
	int n;
	static int sn;
};

void D::DoSomething() // OK
{
	A::sn = 20;
}

int A::sn = 10;

class B
{
	friend class C;
private:
	void DoSomething()
	{
		a.n = 10; // OK
		A::sn = 20; // OK
	}

	A a;
};

class C
{
private:
	void DoSomething()
	{
		// a.n = 10; // ?
		// A::sn = 30; // ?
	}

	A a;
};

int main()
{
	return 0;
}