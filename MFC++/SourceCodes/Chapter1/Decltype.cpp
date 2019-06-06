/* Source by Effective Modern C++, Item 3.
 *
 * Topic - decltype의 동작 원리를 파악하자.
 */
#include <vector>

using namespace std;

const int i = 0; // decltype == ?
bool f(const int& i) { } // decltype == ?

struct Point
{
	int x, y; // decltype == ?
};

Point p; // decltype == ?

int main()
{
	const int& ri = i;
	decltype(ri * 42) n = 100; // decltype == ?
	decltype(*&i) n2 = 100; // decltype == ?

	if (f(p.x)) // decltype == ?
	{

	}

	vector<int> v; // decltype == ?
	v.push_back(0);
	v[0] = 1; // decltype == ?
	
	int x;
	decltype(x) n = 100;
	// decltype((x)) n2 = 100; // Hmm...

	int& refPx = x;
	decltype(refPx) rr = n;

	auto a = x;
	decltype(auto) b = x;
	
	auto c = (x);
	decltype(auto) d = (x);
	

	return 0;
}