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
	// Think
	// vector<int&> vec;
	vector<vector<int>> twoDimVec; // Is '<int> >' allowed?

	vector<int> vec;
	
	vector<int> vec_2{ 1, 2, 3, 4, 5 };
	
	vector<int> vec_3 = { 10, 11, 12, 13, 14 };
	
	vector<int> vec_4 = vec;

	vector<int> vec_5(vec);

	vector<int> vec_6(100, 42);
	// Not uniform initialization!

	vector<string> vec_7(10, "Hello, World!");

	vector<string> vec_8(10);
	// Must be able to use default initialization(or Value-initialization)

	vector<string> vec_9{ "Hello!" };
	vector<string> vec_10{ 10 };
	vector<string> vec_11{ 10, "Hello!" };


	return 0;
}