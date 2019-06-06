/* Written by @nErumin (Github)
 * 2017-01-15
 *
 * Topic - pair 객체에 대해 알아보자.
 */

#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

int main()
{
	pair<int, int> intPair;
	pair<int, int> intPair_2{ 3, 2 };
	pair<double, double> doublePair(10.2, 20.3);
	auto autoPair = make_pair(static_cast<string>("Hello"), static_cast<string>("World"));

	int i = intPair.first;
	int i2 = intPair.second;

	intPair == intPair_2;
	intPair != intPair_2;

	intPair > intPair_2;
	intPair < intPair_2;
	intPair <= intPair_2;
	intPair >= intPair_2;
	
	return 0;
}