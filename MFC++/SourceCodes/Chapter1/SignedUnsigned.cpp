/* Source by C++ Primer 5th Edition.
 *
 * Topic - 부호 있는 타입과 부호 없는 타입을 섞어쓰는 표현식은 항상 경계하자.
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	unsigned int u = 1000;
	int i = -100;

	cout << i + i << endl; // OK.
	cout << u + i << endl; // Hmm..

	unsigned int num = 100;
	unsigned int num_2 = 50;

	cout << num - num_2 << endl;
	cout << num_2 - num << endl;

	int a = -1;
	unsigned int b = 10000;
	cout << a * b << endl;

	/*
	 * What is the problem?
	 */
	for (unsigned int ui = 10; ui >= 0; --ui)
	{
		cout << ui << endl;
	}

	return 0;
}