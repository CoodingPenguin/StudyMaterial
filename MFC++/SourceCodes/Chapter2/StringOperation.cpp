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
	string s2("Hello, World!");

	cout << s1; // ostream
	cin >> s1; // istream

	getline(cin, s1); // istream
	
	s1.empty();
	s1.size(); // returns string::size_type value
			   // Is the typename too long? Use C++11!
	
	// Problem.
	int n = 0;
	s1.size() < n; // Be careful!

	s1 + s2; // operator+, overloaded with const char * (left + right)
	
	// "Hello" + "World" // Oops
	"Hello" + static_cast<string>("World"); // OK

	s1 = s2; // operator=

	s1 == s2; // operator==, value comparision
	s1 != s2; // operator!=

	s1 < s2;
	s1 <= s2;
	s1 > s2;
	s1 >= s2;

	s1[0]; // Arg => size_type (not int)
	s1.c_str(); // C-String. Be careful for invalidation!

	return 0;
}