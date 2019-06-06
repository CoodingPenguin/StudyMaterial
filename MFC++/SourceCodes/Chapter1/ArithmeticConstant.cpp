/* Written by @nErumin (Github)
 * 2016-09-05
 *
 * Topic - 다양한 상수 표기를 활용하자.
 */

int main()
{
	// int, long, long long 중 가장 작은 타입으로 결정.
	// Octal, Hex는 unsigned 형까지 고려 대상.
	// short 상수는 없다.

	1000; // Normal integer constant (int)
	01000; // Octal constant (int)
	0x100000001; // Hex constant (long long)
	0xFFFFFFFF; // Hex constant (unsigned int)

	-100; // Negation of integer constant 100.

	1.1234; // Normal real number constant (double)
	1.1234e0;
	0.;
	.1234;
	0E0;

	100U; // unsigned int
	100UL; // unsigned long
	100ULL; // unsigned long long

	1.1234f; // float
	2.3456e-3l; // long double

	return 0;
}
