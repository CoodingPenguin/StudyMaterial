/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - 때로는 다양한 문자 표현들을 고려하자.
 */

#include <iostream>

// C++11 이후 지원되는 Unicode 시스템. (UTF-8, UTF-16, UTF-32)

using std::cout;
using std::endl;

int main()
{
	char normalCharacter = 'a';
	cout << normalCharacter << endl;
	// Output?

	char unicode8Character = u8'E';
	cout << unicode8Character << endl;
	// Output?

	char16_t unicode16Character = u'\u4E2D';
	cout << unicode16Character << endl;
	// Output?

	char32_t unicode32Character = U'\u4E2D';
	cout << unicode32Character << endl;
	// Output?

	char anotherUnicode16Char = u'\u4E2C'; // !?
	cout << anotherUnicode16Char << endl;
	// Output?

	return 0;
}