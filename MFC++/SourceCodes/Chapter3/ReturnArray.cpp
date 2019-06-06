/* Source by C++ Primer 5th Edition.
 *
 * Topic - 함수에서 배열 타입을 반환해보자.
 */

#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

// Option 1
using arrT = int[10];
arrT* f(); // OK
// arrT f(); // ?

// Option 2
int(*g())[10]; // OK
int(&h())[10]; // OK

// Option 3
auto x() -> int(*)[10]; // OK

// Option 4
int arr[5];

decltype(&arr) y(); // OK
decltype(arr)* z(); // OK

int main()
{
	return 0;
}