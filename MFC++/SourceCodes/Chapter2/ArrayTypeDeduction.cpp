/* Written by @nErumin (Github)
 * 2016-09-06
 *
 * Topic - 포인터 타입과 배열 타입 간 형식 연역 차이를 파악하자.
 */

#include <iostream>

using namespace std;

int main()
{
	int intArr[10] = { 0, 1, 2 };

	auto a = intArr; // Type?
	decltype(intArr) b; // Type?

	// Think about.
	int* pArr[10];
	int (*arrP)[10];

	int (&arrR)[10] = intArr; // Nice!
	arrP = &intArr; // Nice!

	int twoDimArr[10][20];
	auto x = twoDimArr; // Type?
	decltype(twoDimArr) y; // Type?
	
	using IntDim = int[20];
	IntDim* z = twoDimArr;
	
	return 0;
}