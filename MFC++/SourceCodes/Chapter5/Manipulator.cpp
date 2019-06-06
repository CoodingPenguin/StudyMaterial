/* Written by @nErumin (Github)
 * 2016-11-14
 *
 * Topic - 조작자와 출력 버퍼의 관계를 파악하자.
 */

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
	cout << "Some strings"; // Maybe stored in a buffer.

	cout << "Another string" << endl; // Line feeding + clearing buffer
	cout << "Another string" << flush; // just clearing buffer

	cout << "Another string" << ends; // set a null terminator in a buffer, and clearing it.

	cout << unitbuf; // Always clear a buffer when using the stream.
	cout << nounitbuf; // Set to the normal buffer managing mode.

	return 0;
}