/* Written by @nErumin (Github)
 * 2016-10-25
 *
 * Topic - 생성자 초기화 리스트 내에서 멤버의 초기화 순서에 주의하자.
 */

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Twin
{
public:
	Twin() : second(0), first(0) { }
	Twin(T val) : second(val), first(second) { }
private:
	T second;
	T first;
};

int main()
{
	Twin<int> a{ 10 }; // ?
	Twin<int> b(); // !
	return 0;
}