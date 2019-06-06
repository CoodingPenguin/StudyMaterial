/* Written by @nErumin (Github)
 * 2017-01-17
 *
 * Topic - 버킷을 관리하고 조회하는 함수들에 대해 알아보자.
 */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

class Foo
{
public:
	string s;
};

template <>
struct hash<Foo>
{
	size_t operator()(const Foo& f)
	{
		return hash<string>()(f.s);
	}
};

int main()
{
	unordered_set<int> intSet;

	intSet.bucket_count();
	intSet.max_bucket_count();
	intSet.bucket_size(2);
	intSet.bucket(10);

	unordered_set<int>::local_iterator iter;
	unordered_set<int>::const_local_iterator iter;
	
	intSet.begin(1); intSet.cbegin(1);
	intSet.end(1); intSet.cend(1);

	intSet.load_factor();
	intSet.max_load_factor();
	intSet.rehash(10);
	
	return 0;
}