/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - 디버깅에 도움이 되는 도구들을 알아두자.
 */

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main()
{
	assert(true); // interacts with NDEBUG

	string funcName(__func__);
	string fileName(__FILE__);
	string compileTime(__TIME__);
	string compileDateTime(__DATE__);
	int lineNumber = __LINE__;
	
	return 0;
}