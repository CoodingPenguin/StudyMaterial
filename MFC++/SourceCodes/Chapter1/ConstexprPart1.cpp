/* Written by @nErumin (Github)
 * 2016-09-06
 *
 * Topic - 적합하다면, constexpr을 항상 곁에 두자.
 */
int f() { return 42; }

int i = 40;

int main()
{
	// Which one is constant expression?
	const int a = 100;
	const int b = 100 * a / 50;
	int c = 100;
	const int d = f();

	constexpr void* p = nullptr; // Top or Low?
	constexpr int* pi = &i;

	return 0;
}
