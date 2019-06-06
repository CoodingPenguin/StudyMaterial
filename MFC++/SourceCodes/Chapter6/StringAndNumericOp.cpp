/* Written by @nErumin (Github)
 * 2016-11-29
 *
 * Topic - string과 수치 변환에 대해 알아보자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <array>

using namespace std;

int main()
{
	constexpr double pi = 3.141592;
	string piStr = to_string(pi); // for arithmatic types.

	string::size_type nonNumericPos;

	string normalStr("A1233!@##@");
	auto i = stoi(normalStr, nullptr); // invalid_argument exception
	auto i2 = stoi(normalStr, &nonNumericPos, 16); // OK

	auto l = stol(static_cast<string>("0x11111"), nullptr, 16);
	// stoul, stoll, stoull

	auto d = stod(static_cast<string>("+.02E10"));
	auto ld = stold(static_cast<string>("-3.123"), nullptr);
	// The first non-whitespace character must be able to be converted to numeric value!
	return 0;
}