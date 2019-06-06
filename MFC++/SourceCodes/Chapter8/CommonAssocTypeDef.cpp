/* Written by @nErumin (Github)
* 2017-01-15
*
* Topic - pair 객체에 대해 알아보자.
*/

#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

int main()
{
	map<int, int>::key_type a;
	map<int, int>::mapped_type b; // Only in map
	map<int, int>::value_type c; // Set => key_type, Map => pair<const key_type, mapped_type>

	return 0;
}