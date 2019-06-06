/* Source by More Effective C++, Item 4.
 *
 * Topic - 기본 생성자의 존재 여부는 가볍게 볼 것이 아니다.
 */

#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	A() = default;
};

class B
{
public:
	string s;
	B(string s) { this->s = s; }
};
// Be careful of template usage (example : container)

class C
{
public:
	C(int n = UNSPECIFIED) { }
	static const int UNSPECIFIED;
};
// Oops! Too much complexity with member/member function!

int main()
{
	A arr[10]; // OK
	// B arr_2[10]; // ?
	B arr_2[] = { B("A"), B("B"), B("C") }; // OK


	A* allocatedArr = new A[10];
	// B* allocatedArr_2 = new B[10]; // ?
	B* allocatedArr_2 = new B[3]{ B("A"), B("B"), B("C") }; // ?
	B** otherWay = new B*[10]; // OK. Be careful of deleting!

	for (int i = 0; i < 10; i++)
	{
		otherWay[i] = new B("A");
	}

	cout << allocatedArr_2[0].s << endl;


	return 0;
}