/* Written by @nErumin (Github)
 * 2016-11-29
 *
 * Topic - string의 내용을 더 다양하게 조작해보자.
 */

#include <iostream>
#include <string>
#include <vector>
#include <forward_list>
#include <list>
#include <deque>
#include <array>

using namespace std;

int main()
{
	string str;
	string anotherStr;
	auto startPos = 0;
	auto length = 0;

	str.insert(startPos, anotherStr);
	str.insert(startPos, anotherStr, startPos, length);
	str.insert(startPos, "Hello");
	str.insert(startPos, "Hello", length);
	str.insert(startPos, 10, '!');

	str.erase(startPos, length);

	str.assign(anotherStr);
	str.assign(anotherStr, startPos, length);
	str.assign("Hello!");
	str.assign("Hello!", 2);

	str.append(anotherStr);
	str.append(anotherStr, startPos, length);
	str.append("Hello!");
	str.append("Hello!", 5);
	str.append(10, 'c');
	str.append(anotherStr.cbegin(), anotherStr.cend());
	str.append({ "A", "B" });

	str.replace(startPos, length, anotherStr);
	str.replace(str.begin(), str.end(), "Hello!", 6);
	// and anything else...
	return 0;
}