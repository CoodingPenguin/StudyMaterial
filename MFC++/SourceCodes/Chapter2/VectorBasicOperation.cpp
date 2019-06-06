/* Written by @nErumin (Github)
 * 2016-09-12
 *
 * Topic - 벡터 생성자 종류와 벡터 연산들의 종류를 대략적으로 파악하자.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> v1;
	vector<int> v2;

	v1.empty();

	v1.size(); // Not unsigned int!

	v1.push_back(10);

	v1[0];

	v1 = v2;
	v1 = { 1, 2, 3, 4, 5, 6 };

	v1 == v2;
	v1 != v2;

	v1 < v2;
	v1 <= v2;
	v1 > v2;
	v1 >= v2;

	int intArr[] = { 0, 2, 4, 6, 8 };
	vector<int> v(intArr, intArr + 5);
	vector<int> vv(begin(intArr), end(intArr));

	return 0;
}