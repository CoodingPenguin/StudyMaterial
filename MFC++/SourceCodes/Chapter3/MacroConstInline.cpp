/* Source by Effective C++, Item 2.
 * and More Exceptional C++, Item 35.
 *
 * Topic - 매크로보다는 상수나 inline이 낫다.
 */


using namespace std;

#define RATIO 3.14
// If some errors happen, debugging will be stuck.
const double ratio = 3.14;

#define MAX_2(a, b) a > b ? a : b
#define MAX_3(a, b) (a) > (b) ? (a) : (b)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

template <typename T>
inline T max(const T& t1, const T& t2)
{
	return t1 > t2 ? t1 : t2;
}

void Test()
{
	int a = 10, b = 0;
	MAX(++a, b); // +2
	MAX(++a, b + 20); // +1
	max(++a, b); // +1
	max(++a, b + 20); // +1

	MAX_2(a += 3, b); // !?
	int k = MAX_3(a, b) + 10;

	// a += ((3 > b) ? b : a += 3)
	// k = (a) > (b) ? (a) : ((b) + 10)

}

class Foo
{
private:
	static const int size = 10; // Just declaration
	// Replace with Macro?
};

class Bar
{
	enum
	{
		size = 10
	}; // No memory, no ref

	// or
	constexpr static int otherSize = 20;

	int arr[size];
	int arr_2[otherSize];
};

int main()
{
	return 0;
}

// Name pollution
// No addr
// No debugger-friendly


// Advantage -
// Header Guard
// Debugging Features
// Code for debugging only
// Platform