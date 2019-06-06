/* Source by Effective Modern C++, Item 9.
 *
 * Topic - 타입 별칭을 사용할 때는 별칭 선언을 사용하자.
 */

#include <utility>
using namespace std;

// Old style
typedef void(*FuncPtr) (int, double);

// New style
using NewFuncPtr = void(*) (int, double);

// template <typename T>
// typedef pair<T, T> twin; // Oops

template <typename T>
struct OldTypedef
{
	typedef pair<T, T> type;
};

template <>
struct OldTypedef<double>
{
	int type;
};

// New style
template <typename T>
using twin = pair<T, T>;

int main()
{
	OldTypedef<int>::type t = make_pair(3, 2);
	twin<int> t2 = make_pair(3, 2);

	return 0;
}

template <typename T>
class Old
{
private:
	typename OldTypedef<T>::type t;
};

template <typename T>
class New
{
private:
	twin<T> t;
};