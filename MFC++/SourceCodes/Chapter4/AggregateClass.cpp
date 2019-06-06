/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 집합 클래스에 대해 알아보자.
 */

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string address;
	string name;
	int age;
};

int main()
{
	Person p = { "Seoul", "Kim", 20 };

	return 0;
}


// All data members in a class should be public.
// A class should not have any constructors.
// A class should not have any in-class initializers.
// A class should not have any base classes and virtual functions.