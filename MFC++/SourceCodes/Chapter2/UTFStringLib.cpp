/* Written by @nErumin (Github)
 * 2016-09-06
 *
 * Topic - 유니코드에 맞는 string을 사용하자.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	string s2(10, 'c');

	u16string s3;
	u16string s4(u"UTF-16 string!");
	
	u32string s5;
	u32string s6(U"UTF-32 string!");
	
	return 0;
}