/* Source by Effective Modern C++, Item 5.
 *
 * Topic - 가급적이면 auto를 선호하자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <deque>

using namespace std;

/* Case 1 */
template <typename T>
void foo(vector<T> v)
{
	typename vector<T>::const_reverse_iterator iter = v.crbegin(); // Oops.. too long

	auto simpleIter = v.crbegin();
}

int main()
{
	/* Case 2 */
	int n; // Where is initialization?
	// auto i; // Oh!

	/* Case 3 */
	function<int(int i, int j)> l = [n](int i, int j) { return i + n + j; };
	auto l2 = [n](int i, int j) { return i + n + j; };
	// Not just increase typing speed, memory/performance also increase.

	/* Case 4 */
	vector<int> v;
	unsigned size = v.size(); // Hmm...
	auto s = v.size(); // Good.

	/* Case 5 */
	map<string, int> m;

	for (const pair<string, int>& p : m)
	{
		// ?
	}

	for (const auto& p : m)
	{
		// Good.
	}

	return 0;
}