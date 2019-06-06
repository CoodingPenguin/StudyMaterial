/* Source by Wikipedia (https://en.wikipedia.org/wiki/C%2B%2B14#Variable_templates).
 *
 * Topic - 상황에 따라서는 변수도 일반화해서 정의해보자.
 */

#include <iostream>
#include <string>

using namespace std;

template<typename T>
constexpr T pi = T(3.1415926535897932385);

template<>
constexpr const char* pi<const char*> = "pi";

int main()
{
	double d = pi<double>;
	string s(pi<const char *>);

	cout << d << endl;
	cout << s << endl;
	return 0;
}