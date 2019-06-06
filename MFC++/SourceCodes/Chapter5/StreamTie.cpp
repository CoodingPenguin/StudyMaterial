/* Written by @nErumin (Github)
 * 2016-11-14
 *
 * Topic - 스트림을 서로 묶어서 버퍼를 관리해보자.
 */

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
	auto i = 42;
	cin >> i; // Clearing cout's buffer.

	auto coutPtr = cin.tie(nullptr);
	auto nullPtr = cin.tie();
	auto nullPtr_2 = cin.tie(&cerr);

	return 0;
}