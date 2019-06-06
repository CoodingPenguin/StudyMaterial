/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - 다양한 상수 표기를 활용하자.
 */

int main()
{
	L'A'; // wchar_t
	L"A"; // wchar_t string

	u'A'; // UTF-16 (char16_t)
	u"A"; // UTF-16 encoded string (char16_t)

	U'A'; // UTF-32 (char32_t)
	U"A"; // UTF-32 encoded string (char32_t)

	u8'A'; // UTF-8 (char)
	u8"A"; // UTF-8 string (char)

	return 0;
}
