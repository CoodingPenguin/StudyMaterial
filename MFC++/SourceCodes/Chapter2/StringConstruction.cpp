/* Written by @nErumin (Github)
 * 2016-09-06
 *
 * Topic - string 생성자 종류와 대략적인 string 연산들의 종류를 알아두자.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1; // Empty
	string s2(s1); // Copy construction
	string s3 = s2; // Copy construction, Copy initialization.
	
	string s4("MyString");
	string s5 = "MyString"; // little worse than above.

	string s6(10, 'a');

	return 0;
}