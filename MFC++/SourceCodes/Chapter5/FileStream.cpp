/* Written by @nErumin (Github)
 * 2016-11-23
 *
 * Topic - 파일 스트림 객체의 사용법을 다시 돌아보자.
 */

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
	fstream fs{ "ReadFile.txt" };

	return 0;
}

void ReadStream()
{
	// Do not use any streams which goodbit isn't set!

	string fileName{ "ReadFile.txt" };
	string initialWord;
	string line;

	ifstream readStream{ fileName }; // Automatically call open function. (A default mode depends on fstream type.)
	// Open failed? => set failbit.

	readStream.open("ReadFile.txt"); // Again trying to open another file as the previous opened file wasn't closed? => set failbit.

	readStream >> initialWord;
	getline(readStream, line);

	readStream.close();

	ifstream readStream_2{ fileName, ios::in }; // Automatically call open function with the provided mode.
	// When readStream_2 variable is destroyed, the close function is automatically called.
}

void WriteStream()
{
	ofstream printStream; // Associated with nothing.

	printStream.open("ReadFile.txt");
	printStream.close();

	printStream.open("ReadFile.txt", ios::out);
	cout << printStream.is_open() << endl;

	printStream << "Write This!" << endl;

	printStream.close();
}