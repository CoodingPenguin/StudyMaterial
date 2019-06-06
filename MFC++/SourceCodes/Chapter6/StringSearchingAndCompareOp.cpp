/* Written by @nErumin (Github)
 * 2016-11-29
 *
 * Topic - string 검색과 비교에 대해 알아보자.
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
	auto startPos = 0;
	auto length = 0;
	auto str = static_cast<string>("Hello, World!");

	str.find('l', startPos);
	str.find("l", startPos); // 0 is a default value.
	str.find(static_cast<string>("l"), startPos); // 0 is a default value.
	str.find("l", startPos, length);

	str.rfind("A"); // will return string::npos
	str.find_first_of("lo");
	str.find_last_of("lo");
	str.find_first_not_of("lo");
	str.find_last_not_of("lo");

	return 0;
}

void Compare()
{
	auto startPos = 0;
	auto length = 0;
	auto anotherStartPos = 0;
	auto anotherLength = 0;
	string s;
	string s2;

	s.compare(s2);
	s.compare(startPos, length, s2);
	s.compare(startPos, length, s2, anotherStartPos, anotherLength);
	s.compare("Hello, World!"); // Must be finished with null-terminator.
	s.compare(startPos, length, "Hello, World!");
	s.compare(startPos, length, "Hello, World!", anotherLength);
}