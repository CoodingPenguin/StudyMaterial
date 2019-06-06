/* Source by Effective Modern C++, Item 8
 *
 * Topic - 널 포인터를 표현하고 싶을 때 선택할 수 있는 것은 딱 하나뿐이다.
 */

#include <cstdlib>
#include <iostream>
#include <memory>

using namespace std;

void f(int number) { cout << "f(int)" << endl; }
void f(bool flag) { cout << "f(bool)" << endl; }
void f(void* pointer) { cout << "f(void*)" << endl; }

void* DoSomething() { return nullptr; }

int main()
{
	int* p = 0; // Initialize with constant 0
	
	// p = 0; // OK
	// p = 2; // Hmm?

	int* p2 = NULL; // OK. Initialize with NULL macro.
	int* p3 = nullptr; // OK. Initialize with nullptr (C++11)

	/*
	 * Problem.
	 */
	f(0); // Which function is called?
	f(NULL); // Which function is called?
	f(nullptr); // Which function is called?

	/*
	 * Problem 2.
	 */
	auto result = DoSomething();

	if (result == 0) // Hmm...
	{
		// ....
	}

	return 0;
}

///////////////
void func(unique_ptr<int> ptr) { }

template <typename Func, typename PtrType>
void Foo(Func f, PtrType p)
{
	f(p);
}

void PartTwo()
{
	Foo(func, 0); // !?
	Foo(func, NULL); // !?!?
	Foo(func, nullptr);
}

// nullptr은 nullptr_t 형식. nullptr_t는 모든 포인터 형식으로 암묵적 형변환이 가능하다.