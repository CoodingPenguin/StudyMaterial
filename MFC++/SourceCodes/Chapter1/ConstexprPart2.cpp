/* Source by Effective Modern C++, Item 15.
 *
 * Topic - 적합하다면, constexpr을 항상 곁에 두자.
 */
#include <array>

// constexpr 변수이면 const이지만, const 변수라고 해서 constexpr은 아니다.
// constexpr로 지정되면 배열 크기, 템플릿 인수, 열거자 값, Alignment 지정자 등에 사용이 가능하다.
// constexpr로 지정된 변수나 함수는 반드시 리터럴 형식 (컴파일 도중 값을 결정하는 형식, 상수 형식)으로 선언되거나 매개변수로 취해 돌려주어야 한다.

using namespace std;

int f() { return 42; }

int main()
{
	int n = 0;
	// constexpr int cn = n; // Hmm...

	const int size = f();
	const int size_2 = 42;

	// int intArr[size] = { 0, }; // Hmm...
	int intArr[size_2] = { 0, };

	// array<int, size> arr; // Hmm...
	array<int, size_2> arr;

	return 0;
}

constexpr int power(int base, unsigned int exp)
{
	return (exp == 0) ? 1 : base * power(base, exp - 1);
}

class Point
{
public:
	constexpr Point(double xVal = 0, double yVal = 0)
		: x(xVal), y(yVal)
	{

	}

	// constexpr function != const function
	constexpr double xValue() const { return x; }
	constexpr double yValue() const { return y; }

	// Only in C++14
	// constexpr void setX(double newX) { x = newX; }
	// constexpr void setY(double newY) { y = newY; }
private:
	double x, y;
};

constexpr Point midpoint(const Point& p1, const Point& p2)
{
	return { (p1.xValue() + p2.xValue()) / 2,
			 (p1.yValue() + p2.yValue()) / 2 };
}

/*
    Only in C++14
constexpr Point reflection(const Point& p)
{
	Point result;

	result.setX(-p.xValue());
	result.setY(-p.yValue());

	return result;
}
*/

void PartTwo()
{
	constexpr int size = 10;
	array<int, power(3, size)> arr;

	constexpr Point p1(10, 20);
	constexpr Point p2(20, 30);
	constexpr Point mid = midpoint(p1, p2);
	// constexpr Point ref = reflection(p1);
}