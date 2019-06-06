/* Source by Exceptional C++ Style, Item 28.
 *
 * Topic - 키워드는 왜 식별자로 사용이 불가능할까?
 */

class iff
{
public:
	iff(bool) { } // Ctor?
};

class SomeFunctor
{
public:
	int operator()(bool) { return 42; }
};

int main()
{
	if (true); // Ambiguous
	if (42); // Ambiguous

	SomeFunctor ifff;
	ifff(true); // Ambiguous
	ifff(42); // Ambiguous

	return 0;
}