/* Written by @nErumin (Github)
 * 2016-11-23
 *
 * Topic - 문자열 스트림 객체의 사용법을 다시 돌아보자.
 */

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;


void ReadStream()
{
	string sample{ "Hello World Hello Universe" };
	string word;
	string anotherWord;

	istringstream iss;
	istringstream iss_2{ sample };

	iss_2 >> word >> anotherWord; // word : Hello, anotherWord : World
	iss_2.str(); // Current string in stream?

	iss.str(sample); // Set new string to the stream!
}

void WriteStream()
{
	ostringstream wss;
	ostringstream wss_2{ "Sample String" };
	ostringstream wss_3{ "Sample String : ", ios::app };

	wss << "Hello, " << "World!";
	wss_2 << "Hello, ";
	wss_3 << "Hello, " << "Universe!";
	

	cout << wss.str() << endl;
	cout << wss_2.str() << endl; // Hello, String!
	cout << wss_3.str() << endl; // Sample String : Hello, Universe!
}

int main()
{
	stringstream ss;
	return 0;
}