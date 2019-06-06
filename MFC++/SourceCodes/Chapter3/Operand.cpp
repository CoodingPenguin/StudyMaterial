/* Written by @nErumin (Github)
 * Other source by C++ Primer 5th Edition.
 * 2016-09-18
 *
 * Topic - 피연산자 평가 순서에 조심하자.
 */

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int f() { return 1; }
int g() { return 0; }
int h() { return 2; }

int main()
{
	int i = 0;

	cout << i << ++i << endl; // !?!?
	
	int result = f() * g() / h(); // ?

	string s;
	auto iter = s.begin();

	while (iter != s.end() && !isspace(*iter))
		*iter = toupper(*iter++); // ?



	// *iter = toupper(*iter);
	// *(iter + 1) = toupper(*iter);

	return 0;
}