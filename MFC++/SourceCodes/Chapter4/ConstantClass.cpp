/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 상수 클래스에 대해 알아보자.
 */

#include <iostream>
#include <string>

using namespace std;

class Point
{
public:
	constexpr Point(double xVal = 0, double yVal = 0)
		: x(xVal), y(yVal)
	{

	}

	// constexpr function != const function (implicit const function)
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
	constexpr Point p1(10, 20);
	constexpr Point p2(20, 30);
	constexpr Point mid = midpoint(p1, p2);
	// constexpr Point ref = reflection(p1);
}

int main()
{
	return 0;
}

// All data members should be a constant type.
// There is at least one constexpr ctor in the class.
// The class should use a default dtor when a object is destructed.

// If there are some in-class initializers, initializers should be a constant expression if a type of member is build-in type,
// use their constexpr ctor if a type of member is user-defined type(class).