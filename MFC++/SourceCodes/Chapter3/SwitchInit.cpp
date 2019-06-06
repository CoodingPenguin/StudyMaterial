/* Written by @nErumin (Github)
 * 2016-09-18
 *
 * Topic - switch 레이블에서 초기화 우회를 조심하자.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0;

	switch (i)
	{
	case 1:
		// int j = 0; // OK.
		// string s; // Ouch
		break; // Problematic.
	case 2:
		// !?
		
		// Think about.
		// j = 10;
		// cout << s << endl;
	case 3:
		{
			int k = 10; // Nice work.
		}
	}
	return 0;
}