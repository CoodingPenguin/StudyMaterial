/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - initializer_list를 사용해서 가변 매개변수를 흉내내보자.
 */

#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

void f(initializer_list<int> li) { }

template <typename T>
void generalF(initializer_list<T> li) { }

int main()
{
	int i = 0, j = 0, k = 0;

	f({ 1, 2, 3 });
	f({ 1, 2, 3, 4, 5, 6 });
	f({ i, 1, j, 2, k, 3 });

	return 0;
}

void initializerList()
{
	initializer_list<string> stringList; // Empty
	initializer_list<string> anotherList{ "A", "B", "C" };

	initializer_list<string> copiedList(stringList); // Not copied
	copiedList = anotherList; // Not copied
	copiedList = { "X", "Y", "Z" }; // Not copied

	anotherList.size(); // not unsigned int
	anotherList.begin();
	anotherList.end();
}