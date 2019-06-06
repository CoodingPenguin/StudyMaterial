/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - 필요하다면 이스케이프 시퀀스는 무시하자.
 */

#include <iostream>

// C++11 이후 지원되는 Raw string literal.
// XML, Regex, Scripting 등에 유용하게 사용할 수 있다.

using std::cout;
using std::endl;

int main()
{
	const char* commonString = "C:\\Program Files\\...."; // Too bad.
	const char* anotherCommonString = "What a ""nice"" day!"; // Also too bad.
	cout << commonString << endl;
	cout << anotherCommonString << endl;

	const char* betterString = R"(C:\Program Files\....)"; // Good!
	const char* anotherBetterString = R"(What a "nice" day!)";
	cout << betterString << endl;
	cout << anotherBetterString << endl;
	// Are outputs same?

	/*
	 * Using delimeter
	 */
	const char* delimeterString = R"endS((File name = "MyFile". Is it OK?) => Quit)endS";
	cout << delimeterString << endl;

	/*
	 * Raw string literal and Unicode.
	 */
	const char16_t* unicode16RawString = uR"(Whew! This is "Raw" string!)";
	const char16_t* unicode32RawString = uR"...?(Whew! This is "Raw" string with delimeter!)...?";

	return 0;
}