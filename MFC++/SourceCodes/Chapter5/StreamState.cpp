/* Written by @nErumin (Github)
 * 2016-11-14
 *
 * Topic - 스트림의 상태를 점검해보자!
 */

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
	istream::iostate badState = istream::badbit; // A stream is broken. (Read/writing error)
	istream::iostate failState = istream::failbit; // A stream operation is failed. (Logical error)
	istream::iostate eofState = istream::eofbit; // A stream reached EOF.
	istream::iostate goodState = istream::goodbit; // Guaranteed 0 value.

	cin.eof(); // eofbit
	cin.fail(); // failbit or badbit
	cin.bad(); // badbit
	cin.good(); // valid?

	cin.clear(); // Set to good state (Clear)
	cin.clear(ios::eofbit);

	cin.setstate(ios::failbit);
	
	auto currentState = cin.rdstate();

	cin.clear(cin.rdstate() & ~ios::badbit & ~ios::failbit);

	return 0;
}