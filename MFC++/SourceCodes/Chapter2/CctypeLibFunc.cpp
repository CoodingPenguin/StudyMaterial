/* Written by @nErumin (Github)
 * 2016-09-06
 *
 * Topic - 문자 제어에 도움이 되는 함수들을 알아두자.
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s{ "Hello, World!" };
	
	for (auto& c : s)
	{
		isalpha(c); // Alphabet?
		isdigit(c); // Number?
		isalnum(c); // Alphabet + Number?

		isupper(c); // Upper?
		islower(c); // Lower?

		iscntrl(c); // Control?
		isgraph(c); // Graph?
		isprint(c); // Print != Graph

		ispunct(c); // Punctuation?
		isspace(c); // Space?

		isxdigit(c); // Hexadecimal?
	}
	// More with wide characters.

	return 0;
}