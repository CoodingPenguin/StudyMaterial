/* Source by Exceptional C++, Item 45.
 *
 * Topic - 내장 bool 타입은 꼭 필요한걸까?
 */

#include <assert.h>

enum boool
{
	truue, falsse
};

int main()
{
	boool b = falsse;
	b = truue; // Good
	
	int i = 0, j = 0;
	// b = (i == j); // Hmm...
	return 0;
}