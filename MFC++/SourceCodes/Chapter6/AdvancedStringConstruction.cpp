/* Written by @nErumin (Github)
 * 2016-11-29
 *
 * Topic - string 객체를 생성하는 더 많은 방법을 알아보자.
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
	const char oldStyleString[] = "Hello, World!";
	const char anotherOldStyleString[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!' };

	string s(oldStyleString);
	string s2(oldStyleString, 2);
	string s3(anotherOldStyleString); // !?

	string s4(s, 2);
	string s5(s, 2, 100);

	return 0;
}

void SubString()
{
	string s("Hello, World!");

	string s2 = s.substr();
	string s3 = s.substr(0, 1000);
	string s4 = s.substr(1);
}