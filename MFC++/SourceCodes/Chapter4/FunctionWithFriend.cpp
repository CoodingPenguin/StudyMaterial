/* Source by C++ Primer 5th Edition.
 *
 * Topic - 프렌드 선언과 함수와의 관계를 파악하자.
 */

class A
{
	friend void DoDo(A a); // OK
private:
	int n;
	static int sn;
};

int A::sn = 10;

void DoDo(A a)
{
	a.n = 10; // OK
}

void DoDo(int n, A a)
{
	// a.n = 20; // ? 
}


int main()
{
	return 0;
}