/* Source by Effective Modern C++, Item 7.
 *
 * Topic - 기존의 초기화 방식과 목록 초기화 방식의 차이점을 숙지하자.
 */

// C++11 이후 추가된 List initialization(Uniform initialization)
// 기존에는 Aggragate object, Array 등에만 사용이 가능했다.
#include <iostream>
#include <vector>
#include <iterator>
#include <initializer_list>

using namespace std;

class Foo
{
public:
	Foo() { cout << "Foo()" << endl; }
	Foo(int n) { cout << "Foo(int)" << endl; }
	Foo(double d) { cout << "Foo(double)" << endl; }
	Foo(int n, double d) { cout << "Foo(int, double)" << endl; }
	Foo(int n, bool b) { cout << "Foo(int, bool)" << endl; }
	Foo(const Foo& f) { cout << "Foo(const Foo&)" << endl; }
	Foo(initializer_list<long double> li) { cout << "Foo(initializer_list<long double>)" << endl; }
	// Option 1

	//Foo(initializer_list<bool> li) { cout << "Foo(initializer_list<bool>)" << endl; }
	// Option 2

	//Foo(initializer_list<string> li) { cout << "Foo(initializer_list<string>)" << endl; }
	// Option 3

	operator float() { return 0.0f; }
private:
	int x{ 0 }; // OK
	int y = 0; // OK
	// int z(0); // Hmm...
};

class NotCopiableObject
{
public:
	NotCopiableObject(int n) { cout << "NotCopiableObject(int)" << endl; }
	NotCopiableObject(const NotCopiableObject& other) = delete;
	NotCopiableObject& operator= (const NotCopiableObject& other) = delete;
};

template <typename T, typename... Args>
void DoSomething(Args... args)
{
	T temp(args...);
	T temp_2{ args... };

	// Test
	cout << temp.size() << endl;
	cout << temp_2.size() << endl;
}

int main()
{
	NotCopiableObject n{ 0 };
	NotCopiableObject n2(0);
	NotCopiableObject n3 = 0; // Correct?

	vector<int> v{ 1, 2, 3, 4, 5 };

	Foo f(10);
	Foo f2(); // !?
	
	// Bonus
	// vector<string> vs(istream_iterator<string>(cin), istream_iterator<string>());
	
	Foo f3{};

	Foo f4(10, true);
	Foo f5{ 10, true };
	Foo f6(10, 5.0);
	Foo f7{ 10, 5.0 };

	Foo f8(f);
	Foo f9{ f }; // Correct?
	Foo f10(std::move(f));
	Foo f11{ std::move(f) }; // Correct?

	Foo f12({});
	Foo f13{ {} };

	vector<int> v1(10, 20);
	vector<int> v2{ 10, 20 };

	DoSomething<vector<int>>(10, 20);

	return 0;
}

// Bonus
vector<int> DoVecSomething()
{
	return { 10, 20, 30, 40 };
}

vector<int> v = DoVecSomething(); // Yeah!