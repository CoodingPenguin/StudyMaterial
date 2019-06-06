/* Written by @nErumin (Github)
 * 2016-11-23
 *
 * Topic - 파일 스트림을 여는 여러가지 방식을 정리해보자.
 */

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
	ofstream::in; // Open a file for reading only. => only for ifstream, fstream
	ofstream::out; // Open a file for writing only. => only for ofstream, fstream
	// The ios::out mode basically sets the ios::trunc mode.

	ofstream::app; // Find a EOF before writing to a file. => cannot use this mode with ios::trunc.
	// If a stream uses ios::app mode, the ios::out mode is also implicitly set.
	// (In this situation, the content can be written to EOF only.)

	ofstream::ate; // Find a EOF after opening a file.
	ofstream::trunc; // Delete a file. => only available with ios::out mode.
	ofstream::binary; // Process I/O operations in binary (not string).

	/* Default mode
		- ifstream => in
		- ofstream => out
		- fstream => in + out
	*/

	ofstream o("ReadFile.txt", ofstream::out | ofstream::app);

	return 0;
}