/* Source by C++ Primer 5th Edition.
 *
 * Topic - const_cast가 함수 속에서 유용하게 쓰이는 경우를 알아두자.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

const string& shorterString(const string& s1, const string& s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

string& shorterString(string& s1, string& s2)
{
	auto& str = shorterString(const_cast<const string&>(s1),
							  const_cast<const string&>(s2));

	return const_cast<string&>(str);
}

int main()
{
	return 0;
}