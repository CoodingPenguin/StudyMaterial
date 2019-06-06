/* Written by @nErumin (Github)
 * 2016-09-05
 * 
 * Topic - 때로는 다양한 문자 표현들을 고려하자.
 */

#include <iostream>

// C++11 이후 지원되는 Unicode 시스템. (UTF-8, UTF-16, UTF-32)

// wchar_t - 시스템의 가장 큰 확장 문자 집합(Locale)에 속한 문자를 담기에 충분히 큰 크기.
// char16_t - size == 2인 char. UTF-16을 위해 디자인.
// char32_t - size == 4인 char. UTF-32를 위해 디자인.

using std::cout;
using std::endl;

int main()
{
	char helloString[] = "안녕, C++!";

	cout << helloString[0] << endl;
	// Output?

	wchar_t helloWideString[] = L"안녕, C++!";

	cout << helloWideString[0] << endl;
	// Output?

	char16_t helloUTF16String[] = u"안녕, C++!";

	cout << helloUTF16String[0] << endl;
	// Output?

	char32_t helloUTF32String[] = U"안녕, C++!";

	cout << helloUTF32String[0] << endl;
	// Output?

	/*
	 * size comparison
	 */

	cout << (sizeof(char16_t) == sizeof(wchar_t)) << endl;
	// Output?

	return 0;
}