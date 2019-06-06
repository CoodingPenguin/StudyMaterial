/* Source by Effective Modern C++, Item 6.
 *
 * Topic - auto 형식 추론이 예상치 않은 타입일 경우 캐스팅을 활용하자.
 */

#include <vector>

using namespace std;

double foo()
{
	return 3.14;
}

int main()
{
	auto f = foo(); // We need float!
	auto f2 = static_cast<float>(foo());
	
	vector<bool> v;
	auto b = v[5];
	auto b2 = static_cast<bool>(v[5]);
	
	double d = 3.14;
	int c = d * v.size();
	auto c2 = static_cast<int>(d * v.size());

	return 0;
}