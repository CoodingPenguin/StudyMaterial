/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 클래스 멤버의 mutable 속성에 대해서 알아두자.
 */

#include <iostream>
#include <string>
#include <mutex>

using namespace std;

class Foo
{
public:
	void Poo() const
	{
		// callNumber++;
		mutableNumber++;
	}
private:
	int callNumber;
	mutable int mutableNumber;
};

class Concurrency
{
public:
	int getNumber() const
	{
		lock_guard<mutex> guard(m);
		return number;
	}
private:
	int number;
	mutable mutex m;
};

int main()
{
	return 0;
}