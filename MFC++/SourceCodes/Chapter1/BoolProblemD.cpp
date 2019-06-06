/* Source by Exceptional C++, Item 45.
 *
 * Topic - 내장 bool 타입은 꼭 필요한걸까?
 */

#include <assert.h>

class boool
{
public:
	boool();
	boool(int);
	boool& operator=(int);
	// operator int(); // Hmm...
	// operator void*(); // Hmm...
private:
	unsigned char b;
};

const boool truue{ 1 };
const boool falsse{ 0 };

int main()
{
	boool b = falsse;
	b = truue; // Good
	
	if (b) // Hmm...
	{
		
	}

	return 0;
}